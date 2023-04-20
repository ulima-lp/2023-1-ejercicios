main = do
  let lista = [1, 2, 3, 4, 5]
  putStrLn (show (product (filter even lista)))
