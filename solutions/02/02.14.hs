main = do
  n <- readLn
  if mod n 2 == 0
    then putStrLn "par"
    else putStrLn "impar"