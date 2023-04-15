main = do 
    putStrLn "3 + 3?"
    x <- readLn
    if x == 6
        then putStrLn "ok"
        else putStrLn "error"