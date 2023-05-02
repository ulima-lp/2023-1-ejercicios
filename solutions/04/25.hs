main = do
    let lista = [10, 20, 10, 15]
    let notaFinal = calcularNotaFinal lista
    print (calcularNotaFinal lista)
    print (clasificarNotaFinal notaFinal )

clasificarNotaFinal n
    | n >= 11 = "Aprobado"
    | otherwise = "Desaprobado"

calcularNotaFinal lista = (sum [x | x <- lista]) / 4
