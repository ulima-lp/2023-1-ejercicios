contadorDeDigitos :: Int -> Int -> Int
contadorDeDigitos 0 cont = cont
contadorDeDigitos num cont = contadorDeDigitos (num `div` 10) (cont + 1)

main = do
  print ( contadorDeDigitos 12 0 )