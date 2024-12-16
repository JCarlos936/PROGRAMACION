


def decorador(func): #Decorador
    def wrapper(*args, **kwargs):
        print("Antes de la funcion")
        resultado = func(*args, **kwargs)
        print("Despues de la funcion")
        return resultado
    return wrapper     
    pass



@decorador #Imprimimos el decorador
def mi_funcion(): #Funcion que será complementada en el decorador
    print("Funcion Principal")
    pass


mi_funcion() #Imprimimos la funcion





