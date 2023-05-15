main = do
    print(generarLista [1..20])

generarLista lista = do
    map (\x -> x*2) (filter even lista)