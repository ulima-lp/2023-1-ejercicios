main = print(sumarPares[1..10])

sumarPares list = sumarPares' list 0
    where
        sumarPares' [] n = n
        sumarPares' (x:xs) n
            | mod x 2 == 0 = sumarPares' xs (n+x)
            | otherwise = sumarPares' xs n