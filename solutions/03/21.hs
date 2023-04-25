import Data.List

main = do
  let listaOriginal = [1, 1, 2, 3, 3, 4, 4, 5]
  print (listaSinDuplicados listaOriginal)

listaSinDuplicados [] = []
listaSinDuplicados lista = [head lista] ++ listaSinDuplicados(delete (head lista) (tail lista))
    