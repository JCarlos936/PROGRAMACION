

from os import system
import time #Libreria para pausar el tiempo



horas = 2
minutos = 5
segundos = 5


for i in range(1,horas):
    for j in range(1,minutos):
        for k in range(1,segundos):
            print("Horas: |",i," Minutos: |",j," Segundos: |",k)
            time.sleep(1)




system("cls")










