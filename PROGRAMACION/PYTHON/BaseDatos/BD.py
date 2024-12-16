import sqlite3


conexion = sqlite3.connect("bd")
micursor = conexion.cursor()

#lista = [
#   (1,"carlos","programador"),
#   (2,"rodrigo","desarrollador"),
#   (3,"alvaro","hacker")
#]



#micursor.execute("create table t(id int, nombre varchar(45), puesto varchar(45) )")

#micursor.executemany("insert into t(id,nombre,puesto) values(?,?,?)",lista)

#micursor.execute("insert into t(id,nombre,puesto) values(5,'marieCurie','tecnico')")
#micursor.execute("update t set nombre='rafael' where id=4")



conexion.commit()
conexion.close()

