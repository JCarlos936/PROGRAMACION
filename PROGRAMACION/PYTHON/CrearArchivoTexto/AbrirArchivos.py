
f = open("mi_archivo_python.txt","r")


try:
    for long in f:
        print(long)

finally:
    f.close()








