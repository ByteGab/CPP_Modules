# C++ Module 05 - Repetition and Exceptions

![C++](https://img.shields.io/badge/C++-98-blue.svg)
![42 School](https://img.shields.io/badge/42-School-black.svg)

Este repositorio contiene las soluciones para el **Módulo 05** de C++ del currículo de 42 School. 
El objetivo principal de este módulo es profundizar en la Programación Orientada a Objetos introduciendo el manejo seguro de errores a través de **excepciones**, el uso de **clases abstractas**, **polimorfismo** y una aproximación a patrones de diseño como el **Factory Pattern**.

## Contenido del Módulo

El módulo está dividido en 4 ejercicios incrementales que construyen un sistema de "burocracia", gestionando empleados, formularios, firmas y ejecuciones.

### [ex00 - Bureaucrat](./ex00)
Introducción al sistema de excepciones (`try`, `catch`, `throw`).
- Creación de la clase `Bureaucrat` con atributos inmutables.
- Implementación de clases de excepciones personalizadas (`GradeTooHighException`, `GradeTooLowException`) que heredan de `std::exception`.
- Protección estricta del estado del objeto para evitar la instanciación o modificación fuera de los límites permitidos (grado 1 a 150).

### [ex01 - Form](./ex01)
Interacción entre clases y *Forward Declaration*.
- Creación de la clase `Form` con requerimientos de niveles para ser firmado y ejecutado.
- Comunicación bidireccional donde un `Bureaucrat` interactúa con el `Form` para firmarlo.
- Manejo de fallos de jerarquía devolviendo excepciones claras.

### [ex02 - Concrete Forms](./ex02)
Clases Abstractas, Métodos Virtuales Puros y Polimorfismo.
- Refactorización de `Form` a `AForm` (Abstract Form).
- Creación de tres formularios concretos con acciones específicas:
  - `ShrubberyCreationForm`: Manejo de archivos de salida (`std::ofstream`) para generar árboles ASCII.
  - `RobotomyRequestForm`: Generación de probabilidades pseudo-aleatorias (`std::rand`).
  - `PresidentialPardonForm`: Formulario estándar de mensajes.
- Delegación de la ejecución mediante polimorfismo.

### [ex03 - Intern](./ex03)
Patrón de Diseño Factory sin condicionales extensos.
- Creación de un `Intern` que genera dinámicamente formularios mediante *strings*.
- Uso de arrays de punteros a funciones (o métodos) para evadir grandes bloques de `if/else if`, cumpliendo estrictamente con las normas de código limpio de 42.

## Normas Técnicas (42)
- Todo el código está escrito y compila en el estándar **C++98**.
- Está prohibido el uso de la *Standard Template Library* (STL) en este módulo.
- Todas las clases cumplen estrictamente con la **Orthodox Canonical Form** (Constructor por defecto, Constructor de copia, Operador de asignación, Destructor).
- Compilado con flags restrictivas: `-Wall -Wextra -Werror`.
- Sin *memory leaks* (memoria gestionada rigurosamente para los objetos dinámicos instanciados por el Factory).

## Compilación y Uso

Cada ejercicio tiene su propio `Makefile`. Para compilar y ejecutar las pruebas de cualquier ejercicio, simplemente navega a su directorio y ejecuta `make`:

```bash
cd ex02
make
./exercise02
```

Puedes limpiar los archivos objeto y el ejecutable usando:
```bash
make clean
make fclean
```

---
*Este proyecto fue desarrollado como parte del Common Core de la escuela 42.*
