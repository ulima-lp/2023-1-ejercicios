-- numero contador (o acumulador)
contadorDeDigitos :: Int -> Int -> Int
contadorDeDigitos 0 cont = cont
contadorDeDigitos num cont = contadorDeDigitos (num `div` 10) (cont + 1)

main = do
  print ( contadorDeDigitos 123 0 )
-- 123 0 => 12 1
--    => 1 2
--    => 0 3
--    => 3