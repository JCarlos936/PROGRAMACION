




class Padre:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def mensaje(self):
        print("Mi nombre es",self.nombre," ,y mi edad es ",self.edad)
        pass

class Hijo(Padre):
    def __init__(self, nombre, edad):
        super().__init__(nombre,edad)


class Nieto(Hijo):
    def __init__(self, nombre,edad):
        super().__init__(nombre,edad)


persona1 = Padre("carlos",200)
persona1.mensaje()



persona2 = Hijo("rodrigo",100)
persona2.mensaje()




persona3 = Nieto("manuelito", 1)
persona3.mensaje()











