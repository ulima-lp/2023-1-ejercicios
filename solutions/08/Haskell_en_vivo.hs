import System.IO

displayWord :: String -> String -> String
displayWord word current = [if c `elem` current then c else '-' | c <- word]

isLetterInWord :: Char -> String -> Bool
isLetterInWord letter word = letter `elem` word

updateCurrentWord :: Char -> String -> String -> String
updateCurrentWord letter word current = [if c == letter || c `elem` current then c else '-' | c <- word]

playGame :: String -> String -> Int -> [Char] -> IO ()
playGame wordToGuess current attempts incorrect
  | wordToGuess == current = do
        putStrLn "********************"
        putStrLn "*     ¡Ganaste!    *"
        putStrLn "********************"
  | attempts == 0 = do
        putStrLn "********************"
        putStrLn $ "* Perdiste.        *\n* La palabra era:  *\n* " ++ wordToGuess ++ "              *"
        putStrLn "********************"
  | otherwise = do
    putStrLn "================================"
    putStrLn $ "Palabra actual: " ++ displayWord wordToGuess current
    putStrLn $ "Intentos restantes: " ++ show attempts
    putStrLn $ "Letras incorrectas: " ++ incorrect
    putStr "Ingresa una letra: "
    hFlush stdout
    letter <- getLine
    let newCurrent = updateCurrentWord (head letter) wordToGuess current
        newIncorrect = if isLetterInWord (head letter) wordToGuess then incorrect else incorrect ++ [head letter]
        newAttempts = if head letter `elem` incorrect then attempts else if isLetterInWord (head letter) wordToGuess then attempts else attempts - 1
    playGame wordToGuess newCurrent newAttempts newIncorrect

main :: IO ()
main = do
  putStrLn "¡Bienvenido al juego del ahorcado!"
  -- putStrLn "Ingresa la palabra a adivinar:"
  -- wordToGuess <- getLine
  let wordToGuess = "ave"
  -- putStrLn "Ingresa la cantidad de intentos permitidos:"
  -- attempts <- readLn
  let attempts = 1
  let currentWord = replicate (length wordToGuess) '-'
  let incorrectLetters = []
  playGame wordToGuess currentWord attempts incorrectLetters
