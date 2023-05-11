reverseList :: [a] -> [a]
reverseList [] = []
reverseList (x:xs) = reverseList xs ++ [x]

main = do
  print ( reverseList [1, 2, 3, 4, 5])