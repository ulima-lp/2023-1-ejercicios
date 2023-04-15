main = do
  n <- readLn
  putStrLn (if odd n then "impar" else "par")
