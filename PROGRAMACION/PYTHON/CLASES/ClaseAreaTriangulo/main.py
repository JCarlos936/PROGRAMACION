

class Triangulo():
    def __init__(self,area,base,altura):
        self.area = area
        self.base = base
        self.altura = altura

    def OperacionArea(self):
        print("Area -> ",self.area)
        pass

base = int(input("Dijite la base: "))
altura = int(input("Dijite la altura: "))
area = (base*altura)/2

t = Triangulo(area,base,altura)
t.OperacionArea()










