main = do
    let square x = x^2
    n <- readLn
    putStrLn (show (square (n)))