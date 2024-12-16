


filas = int(input("Dijite el numero de filas: "))
columnas = int(input("Dijite el numero de columnas: "))
matriz = []
for i in range(filas):
    matriz.append([])
    for j in range(columnas):
        valor = float(input("Dijite un valor: ".format(i+1,j+1)))
        matriz[i].append(valor)




print()
for filas in matriz:
    print("[", end=" ")
    for elemento in filas:
        print("{:8.2f}".format(elemento), end=" ")
        print("]")
        print()


















