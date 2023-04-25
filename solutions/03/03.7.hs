main = do
  let listaX = [1, 2, 3, 5, 8, 13]
  let filtroX lista = [x | x <- lista, x `elem` listaX]
  let listaA = [1..10]
  let lista = filtroX listaA
  print (lista)
