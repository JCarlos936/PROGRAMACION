

class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
        pass
    def datos(self):
        print("Mi nombre es ",self.nombre)
        print("Mi edad es ",self.edad)
        pass

nombre = input("Dijite su nombre: ")
edad = int(input("Dijite su edad: "))
p = Persona(nombre,edad)
p.datos()








