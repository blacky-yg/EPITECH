--
-- EPITECH PROJECT, 2021
-- wolfram
-- File description:
-- Main
--

module Main where

import System.Exit
import System.IO
import System.Environment
import Control.Exception

import Types
import Parser
import Wolfram

main :: IO ()
main = do
        args <- getArgs
        case args of
            [] -> handleError (ErrorArg "Run ./wolfram -h")
            ("--help":_) -> handleError Usage
            ("-h":_) -> handleError Usage
            null -> do
                case length args `mod` 2 of
                    0 -> parseArgs args
                    1 -> handleError (ErrorRun "Run ./wolfram -h")