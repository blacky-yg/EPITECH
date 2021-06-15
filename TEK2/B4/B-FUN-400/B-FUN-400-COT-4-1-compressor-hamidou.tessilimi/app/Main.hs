module Main where

import Control.Exception
import Data.Char
import Data.List
import Data.Maybe
import Data.String
import Data.Typeable
import Numeric
import System.Environment
import System.Exit
import System.IO
import System.Random
import Text.Read 


data Point = Point Int Int

data Color = Color Int Int Int

data Pixel = Pixel Point Color


readInts :: String -> Maybe Int
readInts s
  | null ret = Nothing
  | [(a, b)] == [(a, "")] = Just a
  | otherwise = Nothing
  where
    ret = reads s
    [(a, b)] = ret

errors :: [String] -> Int
errors (x : xs) | null xs = 84
errors (x : xs)
  | x == "-n" && isJust (readInts (head xs)) = 0
  | x == "-l" && isJust (readInts (head xs)) = 0
  | x == "-f" && isNothing (readInts (head xs)) = 0
  | otherwise = 84

errorHandling :: [String] -> IO ()
errorHandling [] = putStr ""
errorHandling args
  | errors args == 0 = errorHandling (tail (tail args))
errorHandling args = exitWith (ExitFailure 84)

getValue :: [String] -> Integer
getValue args = read (head args)

getArg :: [String] -> (Integer, Integer, String) -> (Integer, Integer, String)
getArg [] (number, limit, file) = (number, limit, file)
getArg args (number, limit, file)
  | head args == "-n" = getArg (tail args) (getValue (tail args), limit, file)
  | head args == "-l" = getArg (tail args) (number, getValue (tail args), file)
  | head args == "-f" = getArg (tail args) (number, limit, head (tail args))
  | otherwise = getArg (tail args) (number, limit, file)

distance :: (Integer, Integer, Integer) -> (Integer, Integer, Integer) -> Float
distance (x1, y1, z1) (x2, y2, z2) = sqrt (fromInteger ret)
  where
    ret = (x1 - x2) ^ 2 + (y1 - y2) ^ 2 + (z1 - z2) ^ 2

getTuple :: String -> (Integer, Integer, Integer)
getTuple tuple = (x, y, z)
  where
    [(x, str1)] = reads (tail tuple)
    [(y, str2)] = reads (tail str1)
    [(z, str3)] = reads (tail str2)

getPositionList :: [String] -> [(Integer, Integer, Integer)]
getPositionList [] = []
getPositionList tuples = position : getPositionList (tail tuples)
  where
    [first, second] = words (head tuples)
    position = getTuple second

minDistanceTuple :: [(Integer, Integer, Integer)] -> (Integer, Integer, Integer) -> (Integer, Integer, Integer) -> (Integer, Integer, Integer)
minDistanceTuple [] i zero = i
minDistanceTuple file i zero | distance first zero <= distance i zero = minDistanceTuple (tail file) first zero
  where
    first = head file
minDistanceTuple file i zero = minDistanceTuple (tail file) i zero

sumThing :: (Integer, Integer, Integer) -> (Integer, Integer, Integer) -> (Integer, Integer, Integer)
sumThing (x, y, z) (x1, y1, z1) = (x + x1, y + y1, z + z1)

gravityLoop :: [(Integer, Integer, Integer)] -> (Integer, Integer, Integer) -> [(Integer, Integer, Integer)]
gravityLoop [] g = [g]
gravityLoop file g = gravityLoop (tail file) (sumThing g (head file))

getColor :: String -> (Integer, Integer)
getColor tuple = (x, y)
  where
    [(x, str1)] = reads (tail tuple)
    [(y, str2)] = reads (tail str1)

getColorList :: [String] -> [(Integer, Integer)]
getColorList [] = []
getColorList inf = color : getColorList (tail inf)
  where
    [first, second] = words (head inf)
    color = getColor first

createClusters :: [(Integer, Integer, Integer)] -> [[(Integer, Integer, Integer)]]
createClusters centroid = [[j] | j <- centroid]

updating :: [(Integer, Integer, Integer)] -> (Integer, Integer, Integer) -> [(Integer, Integer, Integer)]
updating first element = first ++ [element]

updateClusters :: [[(Integer, Integer, Integer)]] -> (Integer, Integer, Integer) -> (Integer, Integer, Integer) -> [[(Integer, Integer, Integer)]]
updateClusters [] closest element = []
updateClusters clusters closest element | closest /= head (head clusters) = head clusters : updateClusters (tail clusters) closest element
updateClusters clusters closest element = new : tail clusters
  where
    new = updating (head clusters) element

clustering :: [(Integer, Integer, Integer)] -> [(Integer, Integer, Integer)] -> [[(Integer, Integer, Integer)]] -> [[(Integer, Integer, Integer)]]
clustering [] centroids clusters = clusters
clustering position_list centroids clusters = clustering (tail position_list) centroids (updateClusters clusters closest (head position_list))
  where
    closest = minDistanceTuple centroids (head centroids) (head position_list)

deleteComb :: (Integer, Integer, Integer) -> ([(Integer, Integer)], [(Integer, Integer, Integer)]) -> Integer -> Integer 
deleteComb position (color_list, position_list) i
  | head position_list /= position = deleteComb position (tail color_list, tail position_list) (i + 1)
  | otherwise = i

deleteIn :: [a] -> Int -> [a]
deleteIn list i = take i list ++ drop (i + 1) list

printOneCluster :: [(Integer, Integer, Integer)] -> ([(Integer, Integer)], [(Integer, Integer, Integer)]) -> IO ()
printOneCluster [] (color_list, position_list) = putStr ""
printOneCluster cluster (color_list, position_list) = do
 searchComb (head cluster) (color_list, position_list)
 let index = deleteComb (head cluster) (color_list, position_list) 0
 printOneCluster (tail cluster) (deleteIn color_list (fromInteger index), deleteIn position_list (fromInteger index))

searchComb :: (Integer, Integer, Integer) -> ([(Integer, Integer)], [(Integer, Integer, Integer)]) -> IO ()
searchComb position (color_list, position_list)
  | position == head position_list = putStrLn (show (head color_list) ++ " " ++ show (head position_list))
searchComb position (color_list, position_list) = searchComb position (tail color_list, tail position_list)

displaying :: [[(Integer, Integer, Integer)]] -> ([(Integer, Integer)], [(Integer, Integer, Integer)]) -> IO ()
displaying [] (color_list, position_list) = putStr ""
displaying cluster (color_list, position_list) = do
  putStrLn ("--\n" ++ show (head (head cluster)) ++ "\n-")
  printOneCluster (tail (head cluster)) (color_list, position_list)
  displaying (tail cluster) (color_list, position_list)

getOptCentroid :: [[(Integer, Integer, Integer)]] -> [(Integer, Integer, Integer)] -> [(Integer, Integer, Integer)]
getOptCentroid [] position_list = []
getOptCentroid clusters position_list = element ++ getOptCentroid (tail clusters) position_list
 where
  [(x, y, z)] = gravityLoop (tail (head clusters)) (0, 0, 0)
  s = toInteger (length (tail (head clusters)))
  element = [(div x s, div y s, div z s)]

checkEnd :: [[(Integer, Integer, Integer)]] -> [[(Integer, Integer, Integer)]]-> Bool
checkEnd [] newClusters = True
checkEnd clusters newClusters
  | head clusters /= head newClusters = False
  | otherwise = checkEnd (tail clusters) (tail newClusters)

findLongest :: [[(Integer, Integer, Integer)]] -> [(Integer, Integer, Integer)] -> [(Integer, Integer, Integer)]
findLongest [] max = max
findLongest clusters max | length (head clusters) > length max = findLongest clusters (head clusters)
                         | otherwise = findLongest (tail clusters) max

deleteCluster :: [[(Integer, Integer, Integer)]] -> [(Integer, Integer, Integer)] -> [[(Integer, Integer, Integer)]]
deleteCluster [] tuple = []
deleteCluster file tuple
  | length (head file) == 1 = deleteCluster (tail file) tuple
  | head file /= tuple = head file : deleteCluster (tail file) tuple
  | otherwise = deleteCluster (tail file) tuple

adjustClusters :: [[(Integer, Integer, Integer)]] -> Integer -> [[(Integer, Integer, Integer)]]
adjustClusters clusters k = newClusters
  where
    f = findLongest clusters (head clusters)
    c = deleteCluster clusters f
    first = take (div (length f) 2) f
    second = drop (div (length f) 2) f
    newClusters = (gravityLoop first (0,0,0) ++ first) : (gravityLoop second (0,0,0) ++ second) : c

empty :: [[(Integer, Integer, Integer)]] -> Bool
empty [] = True
empty clusters | length (head clusters) == 1 = False
               | otherwise = empty (tail clusters) 

condition :: [[(Integer, Integer, Integer)]] -> Integer -> [[(Integer, Integer, Integer)]]
condition clusters k | not (empty clusters) || length clusters /= fromInteger k = condition (adjustClusters clusters k) k
condition clusters k = clusters

clusterLoop :: ([(Integer, Integer)], [(Integer, Integer, Integer)]) -> [(Integer, Integer, Integer)] -> Integer -> [[(Integer, Integer, Integer)]] -> IO ()
clusterLoop (color_list, position_list) centroids k clusters = do
  let newClusters = condition (clustering position_list centroids clusters) k
  let newCentroids = getOptCentroid newClusters position_list
  let initClusters = createClusters newCentroids
  if centroids == newCentroids
    then displaying newClusters (color_list, position_list)
    else do
      clusterLoop (color_list, position_list) newCentroids k initClusters

getCentroid :: Integer -> StdGen -> [(Integer, Integer, Integer)]
getCentroid 0 g = []
getCentroid number g = (x, y, z) : getCentroid (number - 1) g3
  where
    (x, g1) = randomR (0, 255) g
    (y, g2) = randomR (0, 255) g1
    (z, g3) = randomR (0, 255) g2

main :: IO ()
main = do
  args <- getArgs
  g <- newStdGen
  --errorHandling args
  let (number, limit, file) = getArg args (0, 0, "")
  tuples <- readFile file
  let lines_array = lines tuples
  let color_list = getColorList lines_array
  let position_list = getPositionList lines_array
  let centroid = getCentroid number g
  clusterLoop (color_list, position_list) centroid number (createClusters centroid)