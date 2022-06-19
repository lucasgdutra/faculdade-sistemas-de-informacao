isEven x = mod x 2 == 0

isOdd x = mod x 2 /= 0

f :: Int -> Int -> Int
f x y = x + y

menor :: Ord a => a -> a -> a -> a
menor a b c
  | a < b && a < c = a
  | b < a && b < c = b
  | c < a && c < b = c

--menor a b = if a < b then a else b

maior a b
  | a > b = a
  | otherwise = b

hyp a b = sqrt (a ** 2 + b ** 2)

-- fat :: Int -> Int
-- fat 0 = 1
-- fat n = n * fat(n-1)

fat :: Int -> Int
fat n
  | n < 0 = error "Invalid input number"
  | n == 0 = 1
  | n == 1 = 1
  | otherwise = n * fat (n -1)

-- fac :: (Num a1, Num b1, Num b2) =>
-- ((a1, b1) -> ((b2, b2) -> (b2, b2)) -> (a2, b3)) -> a2
-- fac n = fst (n (1,1) (\(prod, sum) -> (prod*sum, sum+1)))

maximoDivisorComum :: Int -> Int -> Int
maximoDivisorComum a b 
    | b == 0 = a
    | otherwise = maximoDivisorComum b (mod a b)
