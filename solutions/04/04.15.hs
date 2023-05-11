sumar :: [Int] -> Int
sumar [] = 0        
sumar xs = head xs + sumar (tail xs)

main = do
  print ( sumar [1, 2, 3])