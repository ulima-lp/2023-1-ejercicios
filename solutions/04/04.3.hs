esVocalMayuscula :: Char -> Bool
esVocalMayuscula 'A' = True
esVocalMayuscula 'E' = True
esVocalMayuscula 'I' = True
esVocalMayuscula 'O' = True
esVocalMayuscula 'U' = True
esVocalMayuscula _ = False

main = do
  print ( esVocalMayuscula 'A')
  print ( esVocalMayuscula 'B')
  print ( esVocalMayuscula 'C')