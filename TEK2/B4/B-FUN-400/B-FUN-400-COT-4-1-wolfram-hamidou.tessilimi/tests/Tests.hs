--
-- EPITECH PROJECT, 2021
-- wolfram
-- File description:
-- Tests
--

{-# LANGUAGE TemplateHaskell #-}

module Tests(
    runTests
) where

import Test.QuickCheck

add :: Int -> Int -> Int
add x y = x + y

prop_testAdd x y = add x y == x + y
    where types = (x::Int, y::Int)

return []
runTests :: IO Bool
runTests = $quickCheckAll