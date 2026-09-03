# Lenguaje de Programación I - C (UNDEF)

Repositorio de prácticas, ejercicios y actividades académicas desarrolladas para la materia **Lenguaje de Programación I** en la **Universidad de la Defensa Nacional (UNDEF)**.

---

## 📌 Contenido del Repositorio

El proyecto organiza los ejercicios por semanas y actividades prácticas:

- **Semana 1:** Introducción al entorno y sintaxis básica.
- **Semana 2:** Tipos de datos, operadores y estructuras de control.
- **Semana 3:** Modularización: Funciones, paso de parámetros y prototipos (`semana3-actividad.c`).

---

## 🛠️ Requisitos y Entorno de Desarrollo

- **Editor:** Visual Studio Code con la extensión *C/C++ Extension Pack* (Microsoft).
- **Compilador:** GCC (MinGW-w64 provisto vía MSYS2 UCRT64).
- **Terminal:** PowerShell / Bash.

---

## 🚀 Compilación y Ejecución

Para compilar y ejecutar cualquier archivo de forma manual desde la terminal de Windows (PowerShell):

### 1. Compilar
gcc semana3-actividad.c -o semana3-actividad.exe

### 2. Ejecutar
.\semana3-actividad.exe

> **Tip:** Para compilar y ejecutar en una sola línea:
> `gcc semana3-actividad.c -o semana3-actividad.exe; .\semana3-actividad.exe`

---

## 📝 Conceptos Aplicados

- Modularización mediante prototipos y separación de responsabilidades en funciones.
- Gestión de tipos de datos (`int`, `double`) y prevención de truncamiento mediante *type casting*.
- Entrada y salida estándar (`<stdio.h>`) formateada con `scanf` y `printf`.
- Compilación nativa y generación de binarios en arquitecturas x86-64.

---

## 👤 Autor

- **Matias Daniel Alessandrello**
- Licenciatura en Ciberseguridad - Universidad de la Defensa Nacional (UNDEF)