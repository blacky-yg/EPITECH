--
-- EPITECH PROJECT, 2021
-- wolfram
-- File description:
-- Spec
--

import Tests
import System.Exit

success :: IO()
success = exitSuccess

failure :: IO()
failure = exitWith $ ExitFailure 84

main :: IO ()
main = do
    good <- and <$> sequence [runTests]
    if good
        then
            putStrLn "Tests passed" >>
            exitSuccess
        else
            putStrLn "Tests Failed" >>
            exitFailure