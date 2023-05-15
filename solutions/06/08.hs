main = do
    print(generarLista ["Hola", "Mundooo"])

generarLista lista = do
    filter (\x -> length x > 5) lista