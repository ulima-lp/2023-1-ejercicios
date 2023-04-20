main = do
  let lista = [1, 2, 3, 4, 5]
  let cantidad = length [x | x <- lista, x < 3]
  print cantidad