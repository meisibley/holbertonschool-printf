# _printf

This is a recreation of a popular C language function that can do formatted printing to standard output. Tasked to us by Holberton School, this emulation of the already popular function will provide us with a better understanding of the inner workings of the printf function. This '_printf' is a custom implementation of the 'printf' function in C.this implementation supports the conversion specifiers '%c', '%s', '%i', '%d' and '%%'.

## Flowchar
![printf_flowchar](https://github.com/user-attachments/assets/d2dd1038-09af-4707-8e4f-144abc7d42c9)

## Compilation
$  gcc -Wall -Werror -Wextra -pedantic *.c

## Fomatting
| Conversion    | Specifiers    |                            |
| ------------- |:-------------:| ---------------:           |
| %c | prints a character                                    |
| %s | prints a string          |                            |
| %% | prints a percent         |                            |
| %d | prints a decimal integer | assumes base 10            |
| %i | prints a decimal integer | detects base automatically |

## Contributors
1. C.J. Johnson
3. Mei Sibley - mei.sibley@atlasschoolcom
