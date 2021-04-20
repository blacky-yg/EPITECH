--
-- EPITECH PROJECT, 2021
-- pushswap_checker
-- File description:
-- main
--

import Utils
import PushSwapOp

import System.Environment()
import System.Exit(ExitCode(ExitSuccess), exitWith)

main :: IO ()
main = do
    push_seq <- checkSeq
    la <- checkList
    let lb = []
    let i = length push_seq
    checkPushswap (doPushswap i push_seq (la, lb))
    exitWith(ExitSuccess)