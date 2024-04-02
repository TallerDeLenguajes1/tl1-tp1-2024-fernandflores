#### .gitignore
_Los archivos ignorados suelen ser artefactos de compilación y archivos generados por el equipo que pueden derivarse de tu fuente de repositorios o que no deberían confirmarse por algún otro motivo._

**¿por que es conveniente incluirlo?**

Es conveniente ignorarlo ya que nos ayuda a que al ignorar archivos en los _commits_ impide que estos se suban  al repositorio, evitando que se sobrescriban archivos de configuración o que se suban los contenidos de directorios que no deberían estar versionados. _por ejemplo: cache, tmp o log_.

**¿cuando se debe utilizar?**

es conveniente usarlo cada vez que iniciemos un proyecto, el mismo github nos recomienda su uso al igual que el del archivo _README.md_.
** configurar .gitignore**
El archivo _.gitignore_ se puede configurar con los siguientes pasos:

- crear un archivo de texto llamado _**.gitignore**_
- en el escribir lo que se desea ignorar por ejemplo:
_si en nuestro archivo tenemos:_
*.dat
resultados/
ignorarArchivo.txt
pasara lo siguiente:
  - ignorara todos los archivos _".dat"_
  - ignorara todos los archivos que se encuentres en la carpeta _"resultados"_
  - ignorara el archivo lamado _"ignorarArchivo.txt"._
### 3c

 Puedo ver los archivos .exe y .cpp, el que no hace falta es el ejecutable (.exe).
  

## 3g

  en el apartado 2 y 3 se puede ver lo mismo ya que el puntero trabaja guardando la direccion de memoria de la variable _"num"_ por lo que el contenido de la variable _"puntero"_ sera el mismo que el de _"num"_. Del punto 4 obtenemos la direccion de memoria del puntero, no la de lo que apunta es por esto que no es lo mismo que las anteriormente mencionadas. 
