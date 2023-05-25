repetirInput :: IO()
repetirInput = do 
  putStrLn "Ingresar letra:"
  input <- getLine
  let letra = head input
  if letra /= '0' 
  then repetirInput
  else return ()

main = do
  repetirInput

  