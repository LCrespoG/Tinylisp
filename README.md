# Link al repositorio:



# Enunciado del Proyecto:
Para este proyecto, se te pide que implementes un intérprete "tiny-lisp" basado en la clase Variant y las capacidades de la Standard Template Library (STL) de C++. Deberás trabajar en CLion para este proyecto.

## Requisitos del proyecto:

1.   Definir e implementar una clase Variant. Esta clase deberá ser capaz de representar diferentes tipos de datos, incluyendo símbolos, números, listas y procedimientos.
2.   Implementar un método to_string() para la clase Variant que convierta una instancia de la clase a una cadena de texto.
3.   Implementar un método to_json_string() para la clase Variant que convierta una instancia de la clase a una representación en formato JSON.
4.   Implementar un método estático from_json_string() que tome una cadena en formato JSON y la convierta a una instancia de la clase Variant.
5.   Implementar un método parse_json() que tome una cadena en formato JSON y la convierta a una instancia de la clase Variant.

## Rúbrica
1. **(30%) Implementación de la clase Variant:**

- Se implementó la clase Variant correctamente, y se incluyeron todos los tipos de datos requeridos.

2. **(20%) Método to_string():**

- El método to_string() está implementado correctamente y devuelve una cadena de texto que representa correctamente la instancia de la clase Variant.

3. **(20%) Método to_json_string():**

- El método to_json_string() está implementado correctamente y devuelve una representación JSON válida de la instancia de la clase Variant.

4. **(15%) Método estático from_json_string():**

- El método estático from_json_string() está implementado correctamente y puede tomar una cadena en formato JSON y convertirla en una instancia de la clase Variant.

5. **(15%) Método parse_json():**

- El método parse_json() está implementado correctamente y puede tomar una cadena en formato JSON y convertirla en una instancia de la clase Variant.

## Entrega
- Todo el código debe estar bien comentado y organizado.
- Se debe incluir un archivo README con instrucciones sobre cómo compilar y ejecutar tu programa.
- El proyecto debe compilarse sin errores ni advertencias en CLion.

# Solución:

Este es un proyecto para un lenguaje de programación Lisp muy simple, denominado **Tinylisp**, implementado en C++. En este programa, se gestionan diferentes tipos de datos mediante la clase `Variant`, que puede almacenar símbolos, números y listas. Además, se puede generar una representación en formato JSON de estos valores.

## Requisitos

- **CMake** (para gestionar la construcción del proyecto).
- **Compilador C++ compatible con C++20** (por ejemplo, GCC, Clang, o MSVC).
- **JetBrains CLion** o cualquier editor que soporte CMake y C++.
  
Este proyecto ha sido probado con el compilador **MinGW** en Windows, pero debería funcionar en cualquier sistema que tenga un compilador C++20.

## Instrucciones para compilar y ejecutar

### Paso 1: Clonar el repositorio

Si aún no has clonado el repositorio en tu máquina, puedes hacerlo con el siguiente comando:

```bash
git clone https://github.com/tu_usuario/Tinylisp.git
