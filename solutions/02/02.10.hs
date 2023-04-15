main = do 
    putStrLn "A: "
    a <- readLn
    putStrLn "B: "
    b <- readLn
    let mayor x y = if x > y then x else y
    let m = mayor a b
    putStrLn (show (m :: Int))