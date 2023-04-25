main = do 
    let myList = [1, 2, 3, 4, 5]
    print (generarDuplicados 3 myList)

generarDuplicados n [] = []
generarDuplicados n lista = (replicate n (head lista)) ++ (generarDuplicados n (tail lista))