cuadradosNumerosPares :: [Int] -> [Int]
cuadradosNumerosPares lista = [x^2 | x <- lista, even x]

main = do
    let lista = [1, 2, 3]
    print(cuadradosNumerosPares lista)