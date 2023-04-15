main = do 
    putStrLn "A: "
    a <- readLn
    putStrLn "B: "
    b <- readLn
    let suma x y = x + y
    putStrLn (show (suma a b))