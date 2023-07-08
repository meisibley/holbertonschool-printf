#include "main.h"

/**
 * prnt_char - print a char
 * @ch: char to print
 * @a: number of characters printed
 *
 * Return: number a
 */
int prnt_char(va_list ch, int a)
{
	_putchar(va_arg(ch, int));
	a++;

	return (a);
}

/**
 * prnt_string - print a string
 * @s: string to print
 * @a: number of characters printed
 *
 * Return: number a.
 */
int prnt_string(va_list s, int a)
{
	char *str;
	int i;

	str = va_arg(s, char *);

	for (i = 0; str && str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		a++;
	}

	return (a);
}
