adivinaNumero numero = do
  putStrLn "Adivina el número: "
  parsedGuess <- readLn
  if parsedGuess == numero
    then putStrLn "¡Ganaste!"
    else do
      if parsedGuess < numero
        then putStrLn ("El número es mayor que " ++ show parsedGuess)
        else putStrLn ("El número es menor que " ++ show parsedGuess)
      adivinaNumero numero
main = do
    adivinaNumero 7