main = do
  let distancia matriz = sqrt((matriz!!1!!0 - matriz!!0!!0)^2 + (matriz!!1!!1 - matriz!!0!!1)^2)
  let matrizX = [[[1, 1], [2, 2]], [[2, 2], [3, 3]], [[3, 3], [4, 4]]]
  let distancia_resultado = [ distancia(matrizA) | matrizA <- matrizX ]
  print (sum(distancia_resultado))
