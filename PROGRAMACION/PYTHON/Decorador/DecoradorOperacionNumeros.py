




def decorador(func):
    def wrapper(*args, **kwargs):
        global n1, n2
        n1 = int(input("Dijite el primer valor: "))
        n2 = int(input("Dijite el segundo valor: "))
        resultado = func(*args, **kwargs)
        print("La suma es ",suma)
        return resultado
    return wrapper
pass



@decorador
def decorador():
    global suma
    suma = n1 + n2
    pass



decorador()





