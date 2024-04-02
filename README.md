###README TP01
**.gitignore**
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

  **ejercicio 03**

  **c)** Puedo ver los archivos .exe y .cpp, el que no hace falta es el ejecutable (.exe).
  - ignorara el archivo lamado _"ignorarArchivo.txt"._
