--
-- EPITECH PROJECT, 2021
-- day01
-- File description:
-- My.hs
--

-- Step 1
mySucc :: Int -> Int
mySucc x = x + 1

myIsNeg :: Int -> Bool
myIsNeg x = if x < 0 then True else False

myAbs :: Int -> Int
myAbs x | x < 0 = -x
        | otherwise = x

myMin :: Int -> Int -> Int
myMin x y | x < y = x
          | otherwise = y

myMax :: Int -> Int -> Int
myMax x y | x < y = y
          | otherwise = x

-- Step 2
myTuple :: a -> b -> (a, b)
myTuple a b = (a, b)

myTruple :: a -> b -> c -> (a, b, c)
myTruple a b c = (a, b, c)

myFst :: (a, b) -> a
myFst (a, _) = a

mySnd :: (a, b) -> b
mySnd (_, b) = b

mySwap :: (a, b) -> (b, a)
mySwap (a, b) = (b, a)

-- Step 3
myHead :: [a] -> a
myHead (x:_) = x
myHead [] = error "Empty List"

myTail :: [a] -> [a]
myTail (_:xs) = xs
myTail [] = error "Empty List"

myLength :: [a] -> Int
myLength [] = 0
myLength (_:xs) = 1 + myLength xs

myNth :: [a] -> Int -> a
myNth [] _ = error ("No index or Empty List")
myNth (x:_) 0 = x
myNth (x:xs) i | i > myLength(x:xs) = error ("Error in length")
               | otherwise = myNth(xs) (i-1)

myTake :: Int -> [a] -> [a]
myTake 0 _ = []
myTake _ [] = []
myTake i (x:xs) | i < 0 = error ("Negative index")
                | i >= myLength(x:xs) = (x:xs)
                | otherwise = x:myTake(i-1)(xs)

myDrop :: Int -> [a] -> [a]
myDrop 0 (x:xs) = (x:xs)
myDrop _ [] = []
myDrop i (x:xs) | i < 0 = (x:xs)
                | i >= myLength(x:xs) = []
                | otherwise = myDrop(i-1)(xs)

myAppend :: [a] -> [a] -> [a]
myAppend [] x = x
myAppend (x:xs) y = x:myAppend xs y

myReverse :: [a] -> [a]
myReverse l = case l of [] -> []
                        (x:xs) -> myAppend(myReverse xs)[x]

myInit :: [a] -> [a]
myInit [_] = []
myInit l = case l of [] -> error ("empty list")
                     (x:xs) -> x:myInit (xs)

myLast :: [a] -> a
myLast l = case l of [x] -> x
                     [] -> error ("empty list")
                     (_:xs) -> myLast xs

myZip :: [a] -> [b] -> [(a, b)]
myZip [] _ = []
myZip _ [] = []
myZip (x:xs) (x':xs') = myAppend [(x, x')](myZip xs xs')

myUnzip :: [(a, b)] -> ([a], [b])
myUnzip [] = ([], [])
myUnzip ((i, j):xs) = (i:(myFst etc), j:(mySnd etc))
                    where
                        etc = myUnzip xs

-- Step 4
myMap :: (a -> b) -> [a] -> [b]
myMap _ [] = []
myMap func (x:xs) = func(x): myMap(func)(xs)

myFilter :: (a -> Bool) -> [a] -> [a]
myFilter _ [] = []
myFilter func (x:xs) | func x = x:myFilter func xs
                     | otherwise = myFilter func xs

myFoldl :: (b -> a -> b) -> b -> [a] -> b
myFoldl _ i [] = i
myFoldl func i (x:xs) = myFoldl func (func i x) xs


myFoldr :: (a -> b -> b) -> b -> [a] -> b
myFoldr _ i [] = i
myFoldr func i (x:xs) = func x (myFoldr func i xs)