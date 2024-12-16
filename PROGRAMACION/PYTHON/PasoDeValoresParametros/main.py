


def PedirDatos():
    global n1, n2
    n1 = int(input("Dijite el primer numero: "))
    n2 = int(input("Dijite el segundo numero: "))

def Funcionsumar(n1,n2):
    suma = n1 + n2
    print("La suma es ",suma)
    pass

def Funcionrestar(n1,n2):
    resta = n1 - n2
    print("La resta es ",resta)
    pass


def main():
    PedirDatos()
    Funcionsumar(n1,n2)
    Funcionrestar(n1,n2)




main()

















