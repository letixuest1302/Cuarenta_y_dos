*Este proyecto ha sido creado como parte del currículo de 42 por Lesainz*

## Descripción
Este proyecto consiste en crear una librería en C que contendrá una serie de funciones de propósito general que tus programas podrán utilizar. Su objetivo principal es ayudarte a comprender cómo actúan estas funciones estándar, implementarlas por tu cuenta y aprender a utilizarlas de forma eficaz para desarrollar una librería propia que te sea útil en los próximos proyectos del cursus

## Instrucciones
Para compilar debes
| Comando | Descripción |
| :--- | :--- |
| `make` | Compila la parte obligatoria y genera un nuevo archivo llamado 'libft.a'. Todas las funciones programadas en (.c) generan un archivo objeto (.o) correspondiente.|
| `make bonus` | Compila e incluye las funciones extra que son listas enlazadas y otras funciones complementarias.|
| `make clean` | Elimina todos los archivos objeto (.o) que generamos al ejecutar 'make'. |
| `make fclean` | Elimina todos los archivos objeto (.o) y la libreria estática(libft.a) que generamos al ejecutar 'make'.|
| `make re` | Hace una limpieza totall y vueve a compilar todo desde cero.|


## Recursos y usos de la IA
* **Recursos:** Páginas de Manual de C ('man'), referencias de la biblioteca estandar y seguimento estricto de La Norma. 
* **Uso de la IA:**Se usó la AI de forma bastante intensa, como apoyo para programar las funciones, entender la lógica interna de cada función y comprobaciones de compilación. 

## Descripción de la libreria 
> **Nota:** Todas las funciones siguen estrictamente los estándares de la Norminette de 42.

* *Parte 1:*

| Categoría | Función | Descripción clave y detalles para la defensa |
| :--- | :--- | :--- |
| **Caracteres** | `ft_isalpha` | Comprueba si el carácter es una letra alfabética (mayúscula o minúscula). |
| | `ft_isdigit` | Comprueba si el carácter es un dígito numérico (`0` a `9`). |
| | `ft_isalnum` | Comprueba si es una letra o un dígito (alfanumérico). |
| | `ft_isascii` | Comprueba si el carácter está dentro de la tabla ASCII (`0`-`127`). |
| | `ft_isprint` | Comprueba si el carácter es imprimible (incluyendo espacios). |
| | `ft_toupper` / `ft_tolower`| Convierten letras entre mayúsculas y minúsculas de forma segura. |
| **Cadenas** | `ft_strlen` | Cuenta los caracteres de una cadena hasta encontrar el nulo (`\0`). |
| | `ft_strchr` / `ft_strrchr`| Buscan la **primera** o **última** aparición de un carácter en una cadena. |
| | `ft_strncmp` | Compara hasta `n` bytes. **Crítico**: usa cast a `unsigned char` para evitar fallos con caracteres extendidos. |
| | `ft_strlcpy` | Copia segura con límite de tamaño. Siempre añade `\0` y devuelve la longitud de la fuente. |
| | `ft_strlcat` | Concatena controlando el buffer de destino para evitar desbordamientos. |
| | `ft_strnstr` | Busca una subcadena dentro de otra limitando la búsqueda a `n` bytes. |
| **Memoria** | `ft_memset` | Rellena `n` bytes de memoria con un valor específico (casteando a `unsigned char *`). |
| | `ft_bzero` | Rellena con ceros (`0` / `\0`) los primeros `n` bytes de un bloque de memoria. |
| | `ft_memcpy` | Copia `n` bytes de memoria a otra zona (**no maneja solapamientos**). |
| | `ft_memmove` | Copia `n` bytes gestionando de forma segura **solapamientos de memoria**. |
| | `ft_memchr` | Busca un byte específico dentro de un bloque de memoria de tamaño `n`. |
| | `ft_memcmp` | Compara dos bloques de memoria byte a byte hasta un máximo de `n` bytes. |
| **Conversión / Asignación** | `ft_atoi` | Convierte una cadena numérica en un `int`, ignorando espacios y gestionando signos. |
| | `ft_calloc` | Reserva memoria dinámica con `malloc` y la **inicializa a cero** con `bzero`. |
| | `ft_strdup` | Duplica una cadena reservando memoria mediante `malloc` y copiando su contenido. |

* **Parte 2:**

| Función | Descripción clave y detalles para la defensa |
| :--- | :--- |
| `ft_substr` | Extrae una subcadena indicando índice de inicio y longitud máxima. Requiere reserva con `malloc`. |
| `ft_strjoin` | Concatena dos cadenas (`s1` y `s2`) en una nueva zona de memoria reservada. |
| `ft_strtrim` | Elimina todos los caracteres pertenecientes a un `set` ubicados al principio y final de una cadena. |
| `ft_split` | Divide una cadena usando un delimitador `c`, devolviendo un array de strings terminado en `NULL`. |
| `ft_itoa` | Convierte un número entero (`int`) en una cadena, gestionando números negativos y `INT_MIN`. |
| `ft_strmapi` | Aplica una función a cada carácter (pasando índice y valor) creando una nueva cadena. |
| `ft_striteri` | Similar a la anterior, pero modifica la cadena **in situ** pasando la dirección de cada carácter. |
| `ft_putchar_fd` / `_str_fd` / `_endl_fd` / `_nbr_fd` | Funciones de salida adaptadas a descriptores de archivo (`fd`) utilizando `write`. |

* **Parte 3: Lisats enlazas:**

| Función | Descripción clave y detalles para la defensa |
| :--- | :--- |
| `ft_lstnew` | Crea un nodo nuevo reservando memoria, asigna el contenido y fija `next` a `NULL`. |
| `ft_lstadd_front` | Añade un nodo al **principio** de la lista enlazada. |
| `ft_lstsize` | Recorre la lista iterativamente para contar el número total de nodos. |
| `ft_lstlast` | Recorre la lista hasta encontrar y devolver el **último** nodo. |
| `ft_lstadd_back` | Añade un nodo al **final** de la lista. |
| `ft_lstdelone` | Libera el contenido de un nodo usando una función personalizada `del`, y después libera el nodo. |
| `ft_lstclear` | Libera y borra **todos** los nodos de la lista, poniendo el puntero de la cabeza a `NULL`. |
| `ft_lstiter` | Recorre la lista aplicando una función dada sobre el contenido de cada nodo. |
| `ft_lstmap` | Crea una **nueva** lista aplicando una función al contenido de otra, gestionando fallos de `malloc`. |