import System.IO

updateGuessedWord :: String -> String -> Char -> String
updateGuessedWord word guessedWord letter = [if (c == letter) || (c `elem` guessedWord) then c else '-' | c <- word]

hangman :: String -> String -> Int -> String -> IO ()
hangman word guessedWord attemptsLeft wrongLetters
  | attemptsLeft <= 0 = putStrLn "You lost! Out of attempts."
  | word == guessedWord = do
    putStrLn "**********************************"
    putStrLn "* You won! You guessed the word. *"
    putStrLn word
  | otherwise = do
      putStrLn "========================="
      putStrLn $ "Word: " ++ guessedWord
      putStrLn "-------------------------"
      putStrLn $ "- Attempts left: " ++ show attemptsLeft
      putStrLn $ "- Letters not in word: " ++ wrongLetters
      putStrLn "-------------------------"
      putStrLn "Enter a letter:"
      input <- getLine
      let letter = head input
      let newGuessedWord = updateGuessedWord word guessedWord letter
      if newGuessedWord == guessedWord
        then do
          putStrLn "Wrong guess!"
          let isRepeated = letter `elem` wrongLetters
          let attemptsLeft' = if isRepeated then attemptsLeft else attemptsLeft - 1
          let wrongLetters' = if isRepeated then wrongLetters else (wrongLetters ++ [letter])
          if isRepeated then putStrLn "Letter already entered." 
          else putStr "" 
          case attemptsLeft' of
            0 -> do
                putStrLn "******************************"
                putStrLn "* You lost! Out of attempts. *"
                putStrLn "* The word was:              *"
                putStrLn word
                putStrLn "* You entered:               *"
                putStrLn wrongLetters'
            _ -> do
              putStrLn $ "Attempts left: " ++ show attemptsLeft'
              hangman word guessedWord attemptsLeft' wrongLetters'
        else do
          putStrLn "Correct guess!"
          hangman word newGuessedWord attemptsLeft wrongLetters

main :: IO ()
main = do
  putStrLn "Welcome to Hangman!"
  putStrLn "Guess the word by entering one letter at a time."
  putStrLn "You have a maximum of 5 attempts."
  hangman "hangman" "-------" 5 ""
