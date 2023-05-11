primerElementoLista :: [Int] -> Int
primerElementoLista [] = -1
primerElementoLista (x:_) = x

main = do
  print ( primerElementoLista [1, 2, 3])
  print ( primerElementoLista [])