solicitar :: Int -> IO()
solicitar 0 = do 
  return ()
solicitar numero = do
  putStrLn "Ingresar número:"
  input <- getLine
  let n = read input :: Int
  do
    putStrLn ("El número ingresado es: " ++ show (n))
    solicitar (numero - 1)

main = do
  putStrLn "Ingresar número de veces: "
  input <- getLine
  let v = read input :: Int
  solicitar v