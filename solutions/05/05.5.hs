filtrarStringsLargos :: [String] -> [String]
filtrarStringsLargos lista = filter (\s -> length s > 5) lista

main = do
    let lista = ["Hola", "Mundo", "Haskell", "Programacion"]
    print(filtrarStringsLargos lista)
