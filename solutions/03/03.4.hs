main = do
  let lista = [ x | x <- [1..7], x `mod` 3 == 0]
  -- 3, 6
  putStrLn (show (product (lista)))  
