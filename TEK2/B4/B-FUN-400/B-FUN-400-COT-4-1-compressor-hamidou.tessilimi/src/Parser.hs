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

usage :: IO()
usage = mapM_ putStrLn [ "USAGE:",
    "\t./imageCompressor [-h]",
    "\t./imageCompressor -n N -l L -f F",
    "",
    "DESCRIPTION",
    "\tN\tnumber of colors in the final image",
    "\tL\tconvergence limit",
    "\tF\tpath to the file containing the colors of the pixels"]

checkArgs :: [String] -> Int
checkArgs (arg:_:xs)
    | arg /= "--rule" && arg /= "--start" && arg /= "--lines"
        && arg /= "--window" && arg /= "--move" = 1
    | null xs = 0
checkArgs (_:_:xs) = checkArgs xs