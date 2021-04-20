--
-- EPITECH PROJECT, 2021
-- pushswap_checker
-- File description:
-- PushSwapOp
--

module PushSwapOp(doPushswap, checkPushswap) where
import Utils

s:: [l] -> [l] --- sa and sb work as well
s [] = []
s [_] = []
s (a:b:ls) = [b, a] ++ ls

sa :: ([l], [l]) -> ([l], [l])
sa (l, []) = (s l, [])
sa (la, lb) = (s la, lb)

sb :: ([l], [l]) -> ([l], [l])
sb (l, []) = (s l, [])
sb (la, lb) = (la, s lb)

sc :: ([la], [lb]) -> ([la], [lb])
sc (la, lb) = (s la, s lb)

pa :: ([l], [l]) -> ([l], [l]) --- pa and pb work as well
pa (la, []) = (la, [])
pa (la, a:lbs) = (a:la, lbs)

pb :: ([l], [l]) -> ([l], [l]) --- pa and pb work as well
pb ([], lb) = ([], lb)
pb (a:las, lb) = (las, a:lb)

r :: [l] -> [l]
r [] = []
r l =
    let a = head l
    in  tail l ++ [a]

ra :: ([l], [l]) -> ([l], [l])
ra (la, lb) = (r la,  lb)

rb :: ([l], [l]) -> ([l], [l])
rb (la, lb) = (la, r lb)

rr :: ([la], [lb]) -> ([la], [lb])
rr (la, lb) = (r la, r lb)

r' :: [l] -> [l]
r' [] = []
r' l =
    let b  = last l
    in  b:(init l)

rra :: ([la], [lb]) -> ([la], [lb])
rra (la, lb) = (r' la, lb)

rrb :: ([la], [lb]) -> ([la], [lb])
rrb (la, lb) = (la, r' lb)

rrr :: ([la], [lb]) -> ([la], [lb])
rrr (la, lb) = (r' la, r' lb)

computeOperation :: String -> ([Int], [Int]) -> ([Int], [Int])
computeOperation "sa" l = sa l
computeOperation "sb" l = sb l
computeOperation "sc" l = sc l
computeOperation "pa" l = pa l
computeOperation "pb" l = pb l
computeOperation "ra" l = ra l
computeOperation "rb" l = rb l
computeOperation "rr" l = rr l
computeOperation "rra" l = rra l
computeOperation "rrb" l = rrb l
computeOperation "rrr" l = rrr l
computeOperation _ _ = ([], [])

--doPushswap lengthOfOps nbrInList ListTuples
doPushswap :: Int -> [String] -> ([Int], [Int]) -> ([Int], [Int])
doPushswap 0 _ l = l
doPushswap i (op:ops) l = doPushswap (i - 1) ops cmp
    where cmp = computeOperation op l

checkPushswap :: ([Int], [Int]) -> IO ()
checkPushswap (la, lb) | length lb == 0 && isSorted la = putStrLn "OK"
                       | otherwise = putStr "KO: " >> print (la, lb)