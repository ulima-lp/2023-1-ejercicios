filtrarPositivos :: [Int] -> [Int]
filtrarPositivos lista = filter (> 0) lista

main = do
    let lista = [-3, -2, -1, 0, 1, 2, 3]
    print(filtrarPositivos lista)