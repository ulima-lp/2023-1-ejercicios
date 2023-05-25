filtrarEnteros :: [Int] -> (Int -> Bool) -> [Int]
filtrarEnteros [] _ = []
filtrarEnteros (x:xs) condicion
  | condicion x = x : filtrarEnteros xs condicion
  | otherwise = filtrarEnteros xs condicion

main = do
    let lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print(filtrarEnteros lista (\x -> x `mod` 2 == 0))