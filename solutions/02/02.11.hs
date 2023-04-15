main = do
  a <- readLn
  b <- readLn
  c <- readLn
  putStrLn (show (max (a :: Int) (max (b :: Int) (c :: Int))))