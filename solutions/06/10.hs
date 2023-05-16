main = do
    let carrito = [("Lapicero", 5, 2.00),("Borrador", 1, 3.00),("Cuaderno", 3, 8.00),("Tijeras", 1, 2.50)]
    print (calcularTotalAPagar carrito)

calcularTotalAPagar carrito = do
    --sum (map (\(nombre, cantidad, precio) -> cantidad * precio) carrito)
    sumar (map (\(nombre, cantidad, precio) -> cantidad * precio) carrito)

sumar [] = 0
sumar (x:xs) = x + sumar xs 