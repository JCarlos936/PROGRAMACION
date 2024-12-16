




class Persona():
    def __init__(x, nombre, edad):
        x.nombre = nombre
        x.edad = edad
        pass
    def mensaje(x):
        print("Nombre -> ",x.nombre)
        print("Edad -> ",x.edad)
        pass

class Hijo(Persona):
    def __init__(self, nombre,edad):
        super().__init__(nombre,edad)
        pass


x1 = Hijo("carlosX1",1)
x2 = Persona("rodrigo",2)


x1.mensaje()
x2.mensaje()










