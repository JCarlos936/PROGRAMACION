
class Perro:
    def __init__(self):
        self.nombre = input("Dijite su nombre: ")
        print("Hola mundo, soy una mascota")

    def comer(self,funcion):
        self.edad = int(input("Dijite su edad: "))
        print(funcion)


p = Perro()
p.comer("Edad es ")
print("Edad es: ",p.edad)
print("Mi nombre es ",p.nombre)













