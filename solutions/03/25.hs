import Data.List
main = do
    print (unirListas [1,2,2,3] [3,4,5])

unirListas l1 l2 = do
    eliminarDuplicados(l1 ++ l2)


eliminarDuplicados [] = []
eliminarDuplicados l3 = [head l3] ++ eliminarDuplicados(delete (head l3) (tail l3))

