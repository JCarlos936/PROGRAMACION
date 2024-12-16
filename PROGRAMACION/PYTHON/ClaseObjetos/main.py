

class Perro:
    def __init__(self, nombre, raza, edad):
        self.nombre = nombre
        self.raza = raza
        self.edad = edad

    def comer(self):
        print("Nombre -> ",perro1.nombre)
        print("Raza -> ",perro1.raza)
        print("Edad -> ",perro1.edad)



nombrePerro = input("Dijite el nombre del Perro: ")
edadPerro = int(input("Dijite la edad del Perro: "))
razaPerro = input("Dijite la raza del perro: ")
perro1 = Perro(nombrePerro,razaPerro,edadPerro)
perro1.comer()














