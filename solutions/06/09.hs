main = do
    print(map (\x -> convertirBinario x) (filter odd [1..5]))

convertirBinario 0 = []
convertirBinario n = do
    convertirBinario(div n 2) ++ [mod n 2]