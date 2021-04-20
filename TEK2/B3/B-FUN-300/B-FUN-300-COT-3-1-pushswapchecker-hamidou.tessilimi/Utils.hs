--
-- EPITECH PROJECT, 2021
-- pushswap_checker
-- File description:
-- Utils
--

module Utils (
    checkNumInL, checkList, split, convertList,
    isSorted, checkGoodSeq, checkSeq)
where

import System.Environment
import System.Exit(ExitCode(ExitFailure), exitWith)
import Text.Read -- readMaybe

checkNumInL :: [String] -> IO ()
checkNumInL [] = return ()
checkNumInL (x:xs) | (readMaybe x :: Maybe Int) /= Nothing = checkNumInL xs
                      | otherwise = putStrLn "KO" >>
                            exitWith (ExitFailure 84)

checkGoodSeq :: [String] -> IO ()
checkGoodSeq [] = return ()
checkGoodSeq ("sa":xs) = checkGoodSeq xs
checkGoodSeq ("sb":xs) = checkGoodSeq xs
checkGoodSeq ("sc":xs) = checkGoodSeq xs
checkGoodSeq ("pa":xs) = checkGoodSeq xs
checkGoodSeq ("pb":xs) = checkGoodSeq xs
checkGoodSeq ("ra":xs) = checkGoodSeq xs
checkGoodSeq ("rb":xs) = checkGoodSeq xs
checkGoodSeq ("rr":xs) = checkGoodSeq xs
checkGoodSeq ("rra":xs) = checkGoodSeq xs
checkGoodSeq ("rrb":xs) = checkGoodSeq xs
checkGoodSeq ("rrr":xs) = checkGoodSeq xs
checkGoodSeq (_:_) = putStrLn "KO" >>
                            exitWith (ExitFailure 84)

convertList :: [String] -> [Int]
convertList [] = []
convertList (x:xs)
    | (readMaybe x :: Maybe Int) /= Nothing = (read x :: Int):convertList xs
    | otherwise = []

checkList :: IO [Int]
checkList = do
    l_a <- getArgs
    checkNumInL l_a
    return (convertList l_a)

checkSeq :: IO [String]
checkSeq = do
    l_a <- getLine
    let ops = filter (/="") (split l_a)
    checkGoodSeq ops
    return (ops)

split :: String -> [String]
split " " = []
split xs = case break (==' ') xs of
                (str, "") -> [str]
                (str, _:rs) -> str:split rs

isSorted :: (Ord a) => [a] -> Bool
isSorted []       = True
isSorted [_]      = True
isSorted (x:y:xs) = x <= y && isSorted (y:xs)