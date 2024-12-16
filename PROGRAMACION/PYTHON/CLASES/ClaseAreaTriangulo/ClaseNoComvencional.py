

class Padre():
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
        pass
    def comer(self):
        print("Mi nombre es ",self.nombre," y mi edad es ",self.edad," y estoy comiendo...")
        pass


class Hijo(Padre):
    def __init__(self, nombre, edad):
        super().__init__(nombre,edad)
        pass

class Nieto(Hijo):
    def __init__(self, nombre, edad):
        super().__init__(nombre,edad)
        pass




persona1 = Padre("Carlos",100)
persona2 = Hijo("Luisito",2)
persona3 = Nieto("Juan III",1)



persona1.comer()
persona2.comer()
persona3.comer()








