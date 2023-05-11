-- Función para calcular el factorial de un número
factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n - 1)

-- Función para calcular el n-ésimo número de la serie de Fibonacci
fibonacci :: Int -> Int
fibonacci 0 = 0
fibonacci 1 = 1
fibonacci n = fibonacci (n - 1) + fibonacci (n - 2)

-- Función para calcular la suma de los primeros n números naturales pares
sumpares :: Int -> Int
sumpares 0 = 0
-- sumpares n = 2 * n + sumpares (n - 1)
sumpares n = sum(take n [x*2 | x <- [1..]])

-- Función para calcular la suma de los primeros n números naturales impares
sumimpares :: Int -> Int
sumimpares 0 = 0
-- sumimpares n = (2 * n - 1) + sumimpares (n - 1)
sumimpares n = sum(take n [x*2 - 1 | x <- [1..]])

-- Función para determinar si un número es primo
esPrimo :: Int -> Bool
esPrimo n = length [x | x <- [1..n], n `mod` x == 0] == 2

-- Función para calcular la suma de los primeros n números primos
sumprimos :: Int -> Int
sumprimos 0 = 0
sumprimos n = if esPrimo n then n + sumprimos (n - 1) else sumprimos (n - 1)

-- Función para sumar los resultados de las funciones anteriores
sumaTodas :: Int -> Int
sumaTodas n = factorial n + fibonacci n + sumpares n + sumimpares n + sumprimos n

-- Programa principal para imprimir los resultados
main = do
  putStrLn "Resultados para n=2:"
  putStrLn $ "Suma de factorial, fibonacci, pares, impares y primos: " ++ show (sumaTodas 2)
  putStrLn "Resultados para n=3:"
  putStrLn $ "Suma de factorial, fibonacci, pares, impares y primos: " ++ show (sumaTodas 3)
  putStrLn "Resultados para n=10:"
  putStrLn $ "Suma de factorial, fibonacci, pares, impares y primos: " ++ show (sumaTodas 10)
