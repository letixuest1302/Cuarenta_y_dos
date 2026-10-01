*Este proyecto ha sido creado como parte del currículo de 42 por Lesainz*

## Descripción
Este proyecto consiste en crear una librería en C que contendrá una serie de funciones de propósito general que tus programas podrán utilizar. Su objetivo principal es ayudarte a comprender cómo actúan estas funciones estándar, implementarlas por tu cuenta y aprender a utilizarlas de forma eficaz para desarrollar una librería propia que te sea útil en los próximos proyectos del cursus

## Instrucciones
Para compilar debes
| Comando | Descripción |
| :--- | :--- |
| `make` | Compila la parte obligatoria y genera un nuevo archivo llamado 'libft.a'. Todas las funciones programadas en (.c) generan un archivo objeto (.o) correspondiente.|
| `make bonus` | Compila e incluye las funciones extra que son listas enlazadas y otras funciones complementarias.|
| `make clean` | Elimina todos los archivos objeto (.o) que generamos ejecutar 'make'.|
| `make fclean` | Elimina todos los archivos objeto (.o) que generamos ejecutar 'make'.|
| `make re` | Hace una limpieza totall y vueve a compilar todo desde cero.|


## Recursos y usos de la IA
* **Recursos:** Páginas de Manual de C ('man'), referencias de la biblioteca estandar y seguimento estricto de La Norma. 
* **Uso de la IA:**Se usó la AI de forma bastante intensa, como apoyo para programar las funciones, entender la lógica interna de cada función y comprobaciones de compilación. 

## Descripción de la libreria 
> **Nota:** Todas las funciones siguen estrictamente los estándares de la Norminette de 42.

La libreria esta compuesta 43 funciones: 
* **Parte 1 (Funciones de la libc):** Implementaciones propias de funciones clásicas de la biblioteca estándar de C para clasificación de caracteres, manipulación de memoria, cadenas de texto y conversiones (`ft_isalpha`, `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_atoi`, etc.).  
* **Parte 2 (Funciones adicionales):**  Un conjunto de utilidades que extienden las capacidades estándar, permitiendo trabajar con subcadenas, uniones, recortes, división de strings, conversión de enteros a cadenas (`ft_itoa`), iteradores y funciones de salida por descriptor de archivo (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_putstr_fd`, etc.)
* **Parte 3 (Funciones enlazadas):** Funciones orientadas a la manipulación dinámica de nodos mediante la estructura `t_list` (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstclear`, etc.). Siendo un total de 9 funciones. 
