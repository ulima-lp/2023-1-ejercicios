main = do
  let lista = [1, 2, 3, 4, 5]
  let suma = sum [x | x <- lista, x >= 3 ]
  print suma