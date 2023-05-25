transformarEnterosACuadrados :: [Int] -> [Int]
transformarEnterosACuadrados [] = []  -- Caso base: lista vacía
transformarEnterosACuadrados (x:xs) = x^2 : transformarEnterosACuadrados xs 

main = do
    let lista = [1, 2, 3]
    print(transformarEnterosACuadrados lista)