main = do
  n <- readLn
  putStrLn (if even n then "par" else "impar")
