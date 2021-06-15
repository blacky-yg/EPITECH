--
-- EPITECH PROJECT, 2021
-- wolfram
-- File description:
-- Parser
--

module Parser (
    success,
    failure,
    usage,
    handleError,
    getLines,
    getRule,
    getStart,
    getWin,
    getMove,
    checkArgs
) where

import System.Exit
import Types

success :: IO()
success = exitSuccess

failure :: IO()
failure = exitWith $ ExitFailure 84

handleError :: ErrorType -> IO()
handleError (ErrorArg msg) = putStrLn ("Bad argument: " ++ msg) >> failure
handleError (ErrorRun msg) = putStrLn ("Runtime Error: " ++ msg) >> failure
handleError Usage = usage >> success

getRule :: [String] -> Int
getRule args = case args of
                    ("--rule":n:_) -> read n
                    (_:"--rule":n:_) -> read n
                    (_:xs) -> getRule xs
                    null -> 0

getStart :: [String] -> Int
getStart args = case args of
                    ("--start":n:_) -> read n
                    (_:"--start":n:_) -> read n
                    (_:xs) -> getStart xs
                    null -> 0

getLines :: [String] -> Int
getLines args = case args of
                    ("--lines":n:_) -> read n
                    (_:"--lines":n:_) -> read n
                    (_:xs) -> getLines xs
                    null -> 2147483647

getWin :: [String] -> Int
getWin args = case args of
                    ("--window":n:_) -> read n
                    (_:"--window":n:_) -> read n
                    (_:xs) -> getWin xs
                    null -> 80

getMove :: [String] -> Int
getMove args = case args of
                    ("--move":n:_) -> read n
                    (_:"--move":n:_) -> read n
                    (_:xs) -> getMove xs
                    null -> 0

usage :: IO()
usage = mapM_ putStrLn [ "USAGE:",
    "\t./wolfram [-h]",
    "\t./wolfram [--rule n, --start n, --lines n, --window n, --move n]",
    "",
    "DESCRIPTION",
    "\tWolfram is a program that implement elementary cellular automaton",
    "\tin the terminal." ]

checkArgs :: [String] -> Int
checkArgs (arg:_:xs)
    | arg /= "--rule" && arg /= "--start" && arg /= "--lines"
        && arg /= "--window" && arg /= "--move" = 1
    | null xs = 0
checkArgs (_:_:xs) = checkArgs xs