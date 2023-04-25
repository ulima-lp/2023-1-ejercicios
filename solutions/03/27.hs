import Data.List (nub)
import Data.Char (toLower)

main = do
    print(obtenerVocales "Hola")

obtenerVocales :: String -> [Char]
obtenerVocales cadena = nub [c | c <- map toLower cadena, c `elem` "aeiou"]