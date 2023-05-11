parImpar :: Int -> String
parImpar n | n `mod` 2 == 0 = "Par"
           | otherwise      = "Impar"

main = do
  print ( parImpar 2)
  print ( parImpar 3)