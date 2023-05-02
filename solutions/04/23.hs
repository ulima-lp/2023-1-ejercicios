main = print(clasificarNotas [11, 19, 06, 17, 10, 20, 18])

clasificarNotas [] = []
clasificarNotas (x:xs)
    | x < 11 = ["Desaprobado"] ++ clasificarNotas (xs)
    | otherwise = ["Aprobado"] ++ clasificarNotas (xs)