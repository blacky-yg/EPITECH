--
-- EPITECH PROJECT, 2021
-- wolfram
-- File description:
-- Types
--

module Types (
    ErrorType(..)
) where

import Control.Exception

data ErrorType = ErrorArg String | ErrorRun String | Usage deriving(Show)

instance Exception ErrorType