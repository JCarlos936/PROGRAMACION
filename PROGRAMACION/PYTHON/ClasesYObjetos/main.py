

class Persona:
    def __init__(self):
        self.edad = 30
        print("Hola Mundo")

    def saludar(self,mensaje):
        self.dias = 10
        print(mensaje)


p = Persona()
q = Persona()

p.saludar('Hola soy P')
q.saludar('Soy Q')

print("Mi edad es ",p.edad," anios de edad")
print("Dias de nacido -> ",q.dias)






