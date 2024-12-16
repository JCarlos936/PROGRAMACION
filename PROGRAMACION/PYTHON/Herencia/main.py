


class Persona():
    def __init__(self,nombre,edad):
        self.nombre = nombre
        self.edad = edad

    def trabajar(self):
        print("Mi nombre es ",self.nombre," y mi edad es ",self.edad," anios de edad")
        pass
    def mostrarTodo(self):
        txt = "{0},{1}"
        return txt.format(self.nombre, self.edad)

class Hijo(Persona):
    pass

h = Hijo("Rodrigo2",100)
print(Hijo.__bases__) # A traves de __bases__ podremos ver si se usa la herencia.
print(h.mostrarTodo())
pass





