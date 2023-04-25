import Data.List
main = do
  let myList = [1, 3, 4, 5, 8, 9, 10]
  print (partition (even) (myList))