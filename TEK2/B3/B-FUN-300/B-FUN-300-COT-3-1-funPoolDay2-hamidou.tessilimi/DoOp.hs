--
-- EPITECH PROJECT, 2021
-- day02
-- File description:
-- DoOp
--

import Data.Char
import System.Environment
import Control.Applicative
import Control.Monad
import System.Exit(ExitCode(ExitFailure), ExitCode(ExitSuccess), exitWith)

-- Step 0

myElem :: Eq a => a -> [a] -> Bool
myElem _ [] = False
myElem x l = any (==x) (l)

-- Step 1

safeDiv :: Int -> Int -> Maybe Int
safeDiv _ 0 = Nothing
safeDiv x y = Just (x `div` y)

safeNth :: [a] -> Int -> Maybe a
safeNth [] _ = Nothing
safeNth (x:_) 0 = Just x
safeNth (x:xs) n | (n < 0 || n > length (x:xs)) = Nothing
                 | otherwise = safeNth xs (n - 1)

safeSucc :: Maybe Int -> Maybe Int
safeSucc Nothing = Nothing
safeSucc (Just x) = Just (x + 1)

myLookup :: Eq a => a -> [(a, b)] -> Maybe b
myLookup _ [] = Nothing
myLookup i (x:xs) | i == fst(x) = Just(snd x)
                  | otherwise = myLookup i xs

maybeDo :: (a -> b -> c) -> Maybe a -> Maybe b -> Maybe c
maybeDo _ _ Nothing = Nothing
maybeDo _ Nothing _ = Nothing
maybeDo func (Just a) (Just b) = Just (func a b)

readInt :: [Char] -> Maybe Int
readInt [] = Nothing
readInt x | all isDigit x = Just (read x :: Int )
          | (head x == '-' && all isDigit (tail x) ) = Just (read x :: Int)
          | otherwise = Nothing

-- Step 2

getLineLength :: IO Int
getLineLength = do
    name <- getLine
    return (length name)

printAndGetLength :: String -> IO Int
printAndGetLength name =
    putStrLn name >>
    return (length name)

printTop :: Int -> IO ()
printTop i = let x = 2 * i - 2
                in putStrLn ( "+" ++ concat ["-" | _ <- [0..x-1]] ++ "+")

printInter :: Int -> IO ()
printInter i = let x = 2 * i - 2
                in putStrLn ( "|" ++ concat [" " | _ <- [0..x-1]] ++ "|")

printBox :: Int -> IO ()
printBox 1 = putStrLn "++"
printBox x | x <= 0 = putStrLn ""
           | otherwise = do
               printTop x
               _ <- replicateM (x - 2) (printInter x)
               printTop x

concatLines :: Int -> IO String
concatLines n | n <= 0 = return ""
              | otherwise = do
                    str <- getLine
                    next_str <- concatLines (n - 1)
                    return (str ++ next_str)

getInt :: IO (Maybe Int)
getInt = do
    str <- getLine
    let maybeNb = if (all isDigit str || (head str == '-' &&
            all isDigit (tail str)))
                then Just (read str :: Int)
                    else Nothing
    return maybeNb

do_op :: [Char] -> [Char] -> [Char] -> Int
do_op nb1 "/" nb2 = (read nb1 :: Int) `div` (read nb2 :: Int)
do_op nb1 "*" nb2 = (read nb1 :: Int) * (read nb2 :: Int)
do_op nb1 "+" nb2 = (read nb1 :: Int) + (read nb2 :: Int)
do_op nb1 "-" nb2 = (read nb1 :: Int) - (read nb2 :: Int)
do_op nb1 "%" nb2 = (read nb1 :: Int) `mod` (read nb2 :: Int)

main :: IO ()
main = do
    args <- getArgs
    if (length(args) /= 3) then exitWith(ExitFailure 84) else case args of
        [_, "/", "0"] -> exitWith (ExitFailure 84)
        [_, "%", "0"] -> exitWith (ExitFailure 84)
        [nb1, op, nb2] -> print (do_op nb1 op nb2)
        _ -> exitWith (ExitFailure 84)