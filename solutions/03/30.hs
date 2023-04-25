main = do
  print (filtrarLista [1, 3, 5, 6, 7, 8, 10] 7)

filtrarLista lista n = filter (< n) lista 