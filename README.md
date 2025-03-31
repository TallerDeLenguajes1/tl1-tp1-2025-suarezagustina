# **.gitignore** 🤖
***2_a)*** 
> El archivo `.gitignore`, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto. 🚀

_Es una herramienta esencial en cualquier repositorio, ya que ayuda a mantener un repositorio limpio y organizado, asegurando que solo los archivos realmente necesarios sean rastreados por Git. Su uso aporta varias ventajas, como:_

* Evita el commit de archivos temporales o de configuración personal que no son necesarios para el proyecto
* Previene la inclusión de archivos confidenciales como contraseñas o claves de API
* Mantiene la integridad y seguridad del proyecto al ignorar archivos innecesarios

## ¿Cuándo se debe hacer? 🤔

_El archivo .gitignore debe configurarse antes de realizar el primer commit⚠️, para evitar que archivos innecesarios o sensibles se agreguen al repositorio._

## ¿Cómo configuraría el archivo .gitignore? 🛠️

_Para configurarlo, simplemente se crea un archivo llamado .gitignore en la raíz del proyecto y se agrega las reglas según lo que se desea ignorar._

Ejemplo básico para un proyecto en C: 🧐
```
# Archivos de compilación
*.o
*.out
*.exe

# Configuración de IDEs
.vscode/
.idea/
*.code-workspace

# Archivos de sistema
.DS_Store
Thumbs.db
```

### Regla de cómo ignorar un archivo ignorado.txt 📌
1. Abre o crea el archivo .gitignore en la raíz de tu repositorio.
2. Agrega la siguiente línea al final del archivo:
```
ignorado.txt
```
3. Guarda los cambios y verifica que Git lo está ignorando con:
```
git status
```
4. Confirma los cambios y súbelos al repositorio:
```
git commit -m "Agregando ignorado.txt a .gitignore"
git push origin main
```