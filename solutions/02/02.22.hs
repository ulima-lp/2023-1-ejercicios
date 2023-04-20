main = do
  let lista = [1, 2, 3, 4, 5]
  -- filter FUNCION_QUE_DEVUELVE_TRUE_OR_FALSE LISTA_CON_ELEMENTOS
  putStrLn (show (sum (filter odd lista)))
  
