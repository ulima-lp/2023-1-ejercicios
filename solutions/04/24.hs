main = print(sumarPares [3, 12, 8, 9, 10, 15])

sumarPares [] = 0
sumarPares (x:xs)
    | mod x 2 == 0 = x + sumarPares xs
    | otherwise = sumarPares xs