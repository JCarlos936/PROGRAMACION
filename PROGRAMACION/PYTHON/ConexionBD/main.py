



import sqlite3
"""
miconexion = sqlite3.connect("nameBD")
miCursor = miconexion.cursor()
"""

miconexion2 = sqlite3.connect("nameBD2")
miCursor2 = miconexion2.cursor()


"""
miLista = [
    (1,"Carlos","Programador"),
    (2,"Rodrigo","Desarrollador"),
    (3,"Alvaro","Seguridad Informatica"),
    (4,"Alvaro","Seguridad Informatica")
 ]
"""


miLista2 = [
    (31,"M1","Prog"),
    (32,"G1","Des"),
    (33,"M","SegInf")
]



miCursor2.execute("CREATE TABLE t3(id2, nombre2 varchar(45), area2 varchar(45))")
miCursor2.executemany("INSERT INTO t3 VALUES(?,?,?)",miLista2)



""" miCursor.execute("CREATE TABLE t(id,nombre varchar(45) ,area varchar(45))") """
""" miCursor.executemany("INSERT INTO t VALUES(?,?,?)",miLista) """
""" miCursor.execute("INSERT INTO t VALUES(6,'Gerardo','Programacion')") """
""" miCursor.execute("UPDATE t SET area='Base de Datos' WHERE area='DataBase' ") """
""" miCursor.execute("DELETE from t WHERE id=5 ") """

""" miconexion.commit() """
""" miconexion.close() """


miconexion2.commit()
miconexion2.close()

