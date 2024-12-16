

class Jefe:
    def __init__(self, nombre,edad,telefono):
        self.nombre = nombre
        self.edad = edad
        self.telefono = telefono
        pass
    def trabajar(self):
        print("Nombre -> ",self.nombre)
        print("Edad -> ",self.edad)
        print("Telefono -> ",self.telefono)
        pass
    def mostarTodo(self):
        txt = "{0},{1},{2}"
        return txt.format(self.nombre,self.edad,self.telefono)
        pass

class empleado(Jefe):
    pass



class X(empleado):
    pass


em = empleado("Carlos Rodrigo",10,12)
print(em.mostarTodo())

x1 = X("XXXX",1,2)
print(x1.mostarTodo())












