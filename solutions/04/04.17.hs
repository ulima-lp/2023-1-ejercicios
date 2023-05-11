sumar :: [Int] -> Int
sumar [] = 0
sumar xs = head xs + sumar (tail xs)

longitud :: [Int] -> Int
longitud [] = 0
longitud xs = 1 + longitud (tail xs)

promedio :: [Int] -> Int
promedio xs = sumar xs `div` longitud xs

main = do
  print ( promedio [2, 3, 10])