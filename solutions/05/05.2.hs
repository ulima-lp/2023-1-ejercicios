filtrarPositivos :: [Int] -> [Int]
filtrarPositivos [] = []
filtrarPositivos (x:xs)
  | x > 0 = x : filtrarPositivos xs
  | otherwise = filtrarPositivos xs

main = do
    let lista = [-3, -2, -1, 0, 1, 2, 3]
    print(filtrarPositivos lista)