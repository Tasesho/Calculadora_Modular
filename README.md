# Calculadora en C++

Este es un pequeño proyecto en C++ que implementa una calculadora con operaciones simples (+, -, *, /). Es una práctica orientada al aprendizaje del concepto de **modularización** en programación, separando la lógica en distintos archivos fuente.

## Características

- Operaciones básicas: suma, resta, multiplicación y división.
- Manejo de división por cero (evita errores de ejecución).
- Interfaz de texto simple para el usuario vía consola.

## Requisitos

- Un compilador de C++ como `g++`.
- Un entorno de desarrollo como Visual Studio Code, Code::Blocks, o cualquier otro editor C++.
- Terminal o consola.

## Cómo compilar y ejecutar

1. Abre tu terminal en la raíz del proyecto.
2. Compila los archivos con el siguiente comando:

```bash
g++ main.cpp calculadora.cpp -o calculadora
```

3. Ejecuta el programa con:

```bash
calculadora.exe  # En Windows
```

Esto generará un archivo ejecutable que podrás correr desde la misma carpeta.

## Estructura del proyecto

```
📁 calculadora-proyecto/
├── main.cpp            # Función principal, entrada del programa
├── calculadora.cpp     # Implementación de las operaciones
├── calculadora.h       # Declaraciones de funciones
└── README.md           # Documentación del proyecto
```

## Disclaimer
Este proyecto ha sido desarrollado exclusivamente con fines educativos y de aprendizaje. Está completamente abierto para que cualquier persona lo utilice, modifique o distribuya según sus necesidades, sin restricciones. No se ofrecen garantías ni responsabilidades sobre su uso, y su propósito principal es servir como recurso para quienes deseen entender mejor la modularización en C++ y la programación en general. Siéntete libre de aprovecharlo como mejor te convenga, ya sea para estudio, práctica o referencia.
