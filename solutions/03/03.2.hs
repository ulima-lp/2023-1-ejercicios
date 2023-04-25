main = do
  let lista = [ x | x <- [1..7], x `mod` 2 == 0]
  -- 2, 4, 6
  putStrLn (show (sum (lista)))  
