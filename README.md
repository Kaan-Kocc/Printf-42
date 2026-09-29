*This project has been created as part of the 42 curriculum by kkoc*

# ft_printf

## Description

ft_printf is a C project from the 42 curriculum. The main goal of the project is to recreate the behavior of the standard `printf` function by implementing a custom variadic function called `ft_printf`.

The project helped me practice variadic functions, `va_list`, `va_start`, `va_arg` and `va_end`, as well as formatted output and type handling in C.

The function supports several conversion specifiers and returns the number of characters printed.

---

## Supported Conversions

The following conversion specifiers are implemented:

| Conversion | Description                                                 |
| ---------- | ----------------------------------------------------------- |
| `%c`       | Prints a single character.                                  |
| `%s`       | Prints a string.                                            |
| `%p`       | Prints a pointer address in hexadecimal format.             |
| `%d`       | Prints a decimal integer.                                   |
| `%i`       | Prints an integer in base 10.                               |
| `%u`       | Prints an unsigned decimal integer.                         |
| `%x`       | Prints an unsigned integer in lowercase hexadecimal format. |
| `%X`       | Prints an unsigned integer in uppercase hexadecimal format. |
| `%%`       | Prints a percent sign.                                      |

---

## Variadic Arguments

One of the main purposes of this project is to understand how variadic functions work in C.

The `ft_printf` function accepts a variable number of arguments:

```c
int	ft_printf(const char *str, ...);
```

The `...` allows the function to receive an unspecified number of arguments.

The `stdarg.h` library is used to handle these arguments:

```c
va_list
va_start
va_arg
va_end
```

`va_arg` is used to retrieve each argument according to the expected type of the conversion specifier.

For example:

```c
va_arg(args, int)
```

is used for `%d` and `%i`, while:

```c
va_arg(args, unsigned int)
```

is used for `%u`, `%x` and `%X`.

---

## Helper Functions

The project uses several helper functions to handle the different output types.

| Function         | Description                                                             |
| ---------------- | ----------------------------------------------------------------------- |
| `ft_putchar`     | Prints a single character and returns the number of characters printed. |
| `ft_putstr`      | Prints a string and returns its length.                                 |
| `ft_putnbr`      | Prints a signed integer.                                                |
| `ft_putunsigned` | Prints an unsigned integer.                                             |
| `ft_puthex`      | Prints an unsigned number in hexadecimal format.                        |
| `ft_putptr`      | Prints a pointer address in hexadecimal format with the `0x` prefix.    |

These functions are used by `ft_printf` to handle each conversion specifier separately.

---

## Return Value

`ft_printf` returns the total number of characters printed.

For example:

```c
int	length;

length = ft_printf("Hello %s!\n", "World");
```

The returned value represents the number of characters written by the function, including characters printed from the format string and the converted arguments.

---

## Compilation

The project includes a Makefile that compiles the source files and creates a static library called `libftprintf.a`.

To compile the project:

```bash
make
```

The following commands are also available:

```bash
make clean
make fclean
make re
```

* `make clean` removes the object files.
* `make fclean` removes the object files and `libftprintf.a`.
* `make re` removes everything and recompiles the project.

The project is compiled with:

```text
-Wall -Wextra -Werror
```

and `ar` is used to create the static library.

---

## Instructions

To use `ft_printf` in another C project, include the header:

```c
#include "ft_printf.h"
```

Then compile the program with the library:

```bash
cc main.c -L. -lftprintf
```

For example:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s!\n", "World");
	ft_printf("Number: %d\n", 42);
	ft_printf("Hexadecimal: %x\n", 42);
	return (0);
}
```

---

## Libraries

The project uses only the libraries required by the implemented functions:

```c
#include <stdarg.h>
#include <unistd.h>
```

`stdarg.h` is used for handling variadic arguments, while `unistd.h` provides the `write` function used for character output.

---

## Resources

I used the 42 ft_printf subject, `man` pages and C documentation while working on the project.

I also used the documentation for variadic functions and the following references:

```bash
man printf
man write
man stdarg
```

I used AI tools as an additional resource during development, mainly to understand certain concepts, identify and correct mistakes in my code, and improve my understanding of variadic functions and formatted output. The code was reviewed and tested by me to make sure I understood how it worked and that it followed the requirements of the ft_printf project.
