--
-- EPITECH PROJECT, 2021
-- wolfram
-- File description:
-- wolfram
--

module Wolfram(
    parseArgs,
    computeRules,
    doRightRule,
    displayRule,
    chooseLine
) where

import Types
import Parser
import Data.List
import Data.Bits

chooseLine :: [Int] -> [Int] -> Int -> Int -> Int -> [Int]
chooseLine i l cur n r
    | n <= cur && r == 110
        && ((elem (n + 1) i && elem n i && notElem (n - 1) i)
        || (notElem (n - 1) i && elem n i && notElem (n + 1) i) || (elem (n - 1) i && elem n i && notElem (n + 1) i)
        || (elem (n + 1) i && elem (n - 1) i && notElem n i) || (notElem (n + 1) i && notElem n i && elem (n - 1) i)) = chooseLine i (n:l) cur (n + 1) r
    | n <= cur && r == 30 && (xor (elem (n + 1) i) ((elem n i) || (elem (n - 1) i))) = chooseLine i (n:l) cur (n + 1) r
    | n <= cur && r == 90 && (xor (elem (n - 1) i) (elem (n + 1) i)) = chooseLine i (n:l) cur (n + 1) r
    | n <= cur = chooseLine i l cur (n + 1) r
    | otherwise = sort l

displayRule :: [Int] -> Int -> Int -> Int -> String
displayRule i w m p
    | p < w && elem ((div w 2) - p + m) i = '*':displayRule i w m (p + 1)
    | p < w && notElem (((div w 2) - p) + m) i = ' ':displayRule i w m (p + 1)
    | otherwise = "\n"

doRightRule :: Int -> Int -> Int -> Int -> Int -> Int -> [Int] -> IO()
doRightRule r s l w m nb i
    | (nb < s + l) = putStr(displayRule i w m 0) >> doRightRule r s l w m (nb + 1) (chooseLine i [] nb (-nb) r)
    | (nb == s + l) = putStr(displayRule i w m 0)
    | (nb - 1 < s) = doRightRule r s l w m (nb + 1) (chooseLine i [] nb (-nb) r)
    | otherwise = putStr(displayRule i w m 0) >> doRightRule r s l w m (nb + 1) (chooseLine i [] nb (-nb) r)

computeRules :: Int -> Int -> Int -> Int -> Int -> Int -> IO()
computeRules e r s l w m
    | e == 1 = handleError (ErrorArg "Run ./wolfram -h")
    | r < 0 = handleError (ErrorArg  "Run ./wolfram -h")
    | s < 0 = handleError (ErrorArg  "Run ./wolfram -h")
    | l < 0 = handleError (ErrorArg  "Run ./wolfram -h")
    | w < 0 = handleError (ErrorArg  "Run ./wolfram -h")
    | r == 30 = doRightRule r s l w m 1 [0]
    | r == 90  = doRightRule r s l w m 1 [0]
    | r == 110 = doRightRule r s l w m 1 [0]
    | otherwise = handleError (ErrorArg "Invalid Rule {30, 90, 110}")

parseArgs :: [String] -> IO()
parseArgs args = do
        let r = getRule args
        if r == 0
            then handleError (ErrorArg "You must provide a rule!")
        else do
            let s = getStart args
            let l = getLines args
            let w = getWin args
            let m = getMove args
            let e = checkArgs args
            computeRules e r s l w m