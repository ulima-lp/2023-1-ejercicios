import Data.List

main = do
  let lista = [1, 3, 7, 12, 15, 20]
  putStrLn "Ingrese un número entero: "
  numero <- getLine
  let numeroInt = read numero :: Int
  let listaActualizada = actualizarLista numeroInt lista
  let listaOrdenada = sort listaActualizada
  print listaOrdenada

actualizarLista numero lista
  | numero `elem` lista = delete numero lista
  | otherwise = numero : lista