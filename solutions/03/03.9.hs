-- main = do
--   let distancia matriz = sqrt((matriz!!1!!0 - matriz!!0!!0)^2 + (matriz!!1!!1 - matriz!!0!!1)^2)
--   let matrizA = [[1, 1], [2, 2]]
--   print (distancia(matrizA))

main = do
  let matrizA = [[1,1], [2,2]]
  let lista0 = matrizA!!0
  let lista1 = matrizA!!1
  let x0 = lista0!!0
  let x1 = lista1!!0
  let y0 = lista0!!1
  let y1 = lista1!!1
  let dist = sqrt( (x1-x0)^2 + (y1-y0)^2 )
  print dist