main = do
    let pendiente = calcularPendiente [10,5] [20,18]
    print (show pendiente)
calcularPendiente [x1, y1] [x2, y2] = (y2 - y1) / (x2 - x1)