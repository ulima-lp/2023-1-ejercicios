combinarListas :: (Int -> Int -> Int) -> [Int] -> [Int] -> [Int]
combinarListas _ [] [] = []
combinarListas f (x:xs) (y:ys) = f x y : combinarListas f xs ys

main = do
    let lista1 = [1, 2, 3]
    let lista2 = [2, 3, 4]
    let suma = (+)
    print(combinarListas suma lista1 lista2)
