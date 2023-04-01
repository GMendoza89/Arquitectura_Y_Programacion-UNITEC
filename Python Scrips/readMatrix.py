import numpy as np
import math as mt
import os

iFile = open("Matrice.csv","r")

line = iFile.readline()
size = line.split()
print(size)
rows = int(size[0])
cols  = int(size[1])
print(rows)
print(type (rows))
print(cols)
print(type (cols))
matrix = np.zeros((rows,cols),np.uint64)

for i in range(0,rows):
    Auxiliar = iFile.readline().split()
    for j in range(0,cols):
        matrix[i,j] = int(Auxiliar[j])
    i += 1

print(matrix)





iFile.close()
