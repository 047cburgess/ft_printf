# ft_printf

*This project has been created as part of the 42 curriculum.*

## Description

**ft_printf** is a recoded implementation of the standard `printf` function in C. This project focuses on understanding the intricacies of formatted output while adhering to the 42 norminette coding standards.

This program enables formatted output to the standard output stream, similar to the `printf` function provided by the C standard library `stdio.h`. The `ft_printf` project is essential for gaining a deeper understanding of variadic functions and handling modular code.

### Key Features

- Supports a variety of format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
- Handles variable argument lists using the `stdarg.h` library.
- Fully compliant with 42's norminette coding standards.

---

## Instructions

### Prerequisites

- C compiler
- Make
- A Unix-based operating system

### Installation

Clone the repository:

```bash
git clone https://github.com/047cburgess/ft_printf.git
cd ft_printf
```

### Compilation

To compile the library, run:

```bash
make
```

This will generate the `libftprintf.a` static library containing all implemented functions.

### Usage

Include the header in your C files:

```c
#include "ft_printf.h"
```

Compile your project with the library:

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lftprintf -o your_program
```

### Available Make Rules

- `make` or `make all` - Compiles the library
- `make clean` - Removes object files
- `make fclean` - Removes object files and the library
- `make re` - Recompiles the entire library

---

## Function List

### Format Specifiers Supported

- **`%c`**: Prints a single character
- **`%s`**: Prints a string
- **`%p`**: Prints a pointer address
- **`%d` / `%i`**: Prints a signed decimal integer
- **`%u`**: Prints an unsigned decimal integer
- **`%x` / `%X`**: Prints a number in hexadecimal format (lowercase/uppercase)
- **`%%`**: Prints a literal `%`

### Core Files

- **ft_printf.c**: Main function that parses and processes format strings.
- **ft_printf.h**: Function prototypes and definitions.
- **ft_printchar.c**: Handles the printing of single characters.
- **ft_printstr.c**: Handles the printing of strings.
- **ft_printnbr.c**: Outputs integer numbers in decimal format.
- **ft_printunbr.c**: Outputs unsigned decimal integer numbers.
- **ft_printhex.c**: Outputs numbers in hexadecimal format.
- **ft_printaddress.c**: Translates and formats pointer addresses.
