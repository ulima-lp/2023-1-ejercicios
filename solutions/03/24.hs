main = do
    let lista = [0, 1, 1, 2, 3, 5, 8]
    print (fibonacci lista)

fibonacci lista = do 
    let listaAux = reverse lista
    if length listaAux < 10
    then fibonacci(lista ++ [(head listaAux) + (head(tail(listaAux)))]) 
    else lista