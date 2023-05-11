absoluto :: Int -> Int
absoluto 0 = 0
absoluto n
  | n < 0 = -n
  | otherwise = n
main = do
  print (absoluto (-5))
  print (absoluto 0)
  print (absoluto 5)