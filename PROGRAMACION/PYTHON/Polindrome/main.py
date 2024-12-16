



def palabra(text): #Definimos la función con argumento
    text = text.lower() #Convertimos el texto en minisculas, asegurandonos que todo el texto sea igual en sus letras
    return text == text[::-1] #Invertimos la funcion



print(palabra("oso")) #Probamos con algunas palabras
print(palabra("radar"))

#Si esto se cumple, nos mostrará una respuesta de tipo booleano(TRUE)










