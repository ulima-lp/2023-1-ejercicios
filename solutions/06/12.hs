main = do
    let temperaturas = [(1, "Lima", "10/05/2023", 28.5),(2, "Lima", "10/05/2023", 27.8),(3, "Callao", "10/05/2023", 30.5),(4, "Lima", "10/05/2023", 27.0),(5, "Lima", "10/05/2023", 29.5),(6, "Callao", "10/05/2023", 28.5),(7, "Callao", "10/05/2023", 27.1),(8, "Callao", "10/05/2023", 26.5),(9, "Lima", "10/05/2023", 30.5),(10, "Lima", "10/05/2023", 31.3),(11, "Lima", "10/05/2023", 26.0),(12, "Callao", "10/05/2023", 27.9),(13, "Callao", "10/05/2023", 25.7),(14, "Lima", "10/05/2023", 24.8)]
    print (calcularTemperaturaPromedio temperaturas "Lima")
calcularTemperaturaPromedio temps filtro = do
    let tempsFiltradas = filter (\(_,ciudad,_,_) -> ciudad == filtro) temps
    let sumaTemps = sum (map (\(_,_,_,t) -> truncate t) (tempsFiltradas))
    let contTemps = length (map (\(_,_,_,t) -> t) (tempsFiltradas))
    div sumaTemps contTemps