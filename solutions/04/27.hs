main = print (obtenerNotasAprobadas [11, 09, 07, 16, 17, 20, 20, 10, 19])

obtenerNotasAprobadas lista = obtenerNotasAprobadas' lista []
    where
        obtenerNotasAprobadas' [] aux = aux
        obtenerNotasAprobadas' (x:xs) aux
            | x >= 11 = obtenerNotasAprobadas' xs (aux ++ [x])
            | otherwise = obtenerNotasAprobadas' xs aux