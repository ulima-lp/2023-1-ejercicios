main = do
  let inicial = [19, 0, 11, 10, 20, 5]
  let lista = [ if x < 11 then "desaprobado" else "aprobado" | x <- inicial]
  print (lista)
