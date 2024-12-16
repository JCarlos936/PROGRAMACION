


vector = [] #Inicializamos el vector vacío
suma = 0 #Variable suma
cantidad = int(input("Dijite la cantidad de elementos a ingresar: "))


for i in range(cantidad):
    valor = int(input("Dijite un valor: "))
    vector.append(valor) #Almacenamos el valor
    suma += valor #Sumamos los valores que van dentro del vector

#Imprimimos
print(suma)
print(vector)






