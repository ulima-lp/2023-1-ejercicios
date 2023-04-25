main = do
  let lista1 = [1, 2, 3]
  let lista2 = [4, 5, 6]
  let lista = [x + y | x <- lista1, y <- lista2]
  print (lista)
