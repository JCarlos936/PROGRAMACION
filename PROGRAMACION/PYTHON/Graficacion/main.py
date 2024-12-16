

#Agregamos las librerias con las que graficaremos
import matplotlib.pyplot as plt
import numpy as np


x = np.arange(-10,10,.5) #Le damos los puntos iniciales [A,B]
y = x*np.sin(x) #Para graficar usaremos la funcion SENO
plt.plot(x,y) #Le damos las coordenadas en X,Y y pintará en gráfico
plt.xlabel("Coordenada en X") #Usamos una etiqueta para en el eje X
plt.ylabel("Coordenada en Y") #Usamos una etiqueta en el eje Y
plt.title("Titulo de la grafica") # Usamos un titulo para la grafica
plt.show()  #Mostramos la grafica







