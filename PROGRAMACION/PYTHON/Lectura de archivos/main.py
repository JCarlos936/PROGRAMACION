

file = open('a.txt','r') #Agregamos la ruta y el nombre de nuestro archivo, al igual que
#el permiso de lectura "r"

lineas = file.readlines() #Variable donde se abrira el archivo y el cual usaremos para
# imprimir el texto guardado
print(lineas) #Imprimimos la variable en la que se encuentra almacenado el texto
file.close() #Cerramos el archivo







