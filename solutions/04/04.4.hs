sumaDosPrimeros :: [Int] -> Int
sumaDosPrimeros [] = 0 -- si la lista está vacía, la suma es cero
sumaDosPrimeros [x] = x -- si la lista tiene un solo elemento, la suma es ese elemento
sumaDosPrimeros (x:y:_) = x + y -- si la lista tiene al menos dos elementos, sumamos los dos primeros

main = do
    print ( sumaDosPrimeros [])
    print ( sumaDosPrimeros [1])
    print ( sumaDosPrimeros [1, 2, 3])