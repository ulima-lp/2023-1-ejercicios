longitud :: [Int] -> Int
longitud [] = 0
longitud xs = 1 + longitud (tail xs)

main = do
  print ( longitud [1, 2, 3])