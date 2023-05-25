esVocal = \c  -> c `elem` "aeiouAEIOU" 
contarVocal = \s -> length (filter esVocal s)

main = do
    let palabra = "muercielago"
    print(contarVocal palabra)
