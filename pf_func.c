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
	if (str == NULL)
		str = "(null)";

	for (i = 0; str && str[i] != '\0'; i++)
		_putchar(str[i]), a++;

	return (a);
}

/**
 * prnt_doi - print a decimal or integer number
 * @doi: decimal or integer number to print
 * @a: number of printed
 *
 * Return: number a.
 */
int prnt_doi(va_list doi, int a)
{
	int n;

	n = va_arg(doi, int);
	if (n == 0)
	{
		_putchar(48), a++;
		return (a);
	}
	if (n < 0)
		_putchar('-'), a++, n *= -1;
	a = prnt_unint((unsigned int)n, a);
	return (a);
}

/**
 * prnt_unint - print an unsigned int number
 * @n: unsigned int
 * @a: number of printed
 * Return: a.
 */
int prnt_unint(unsigned int n, int a)
{
	if (n == 0)
		return (a);
	if (n / 10)
		a = prnt_unint(n / 10, a);
	_putchar(n % 10 + 48);
	a++;
	return (a);
}

/**
 * prnt_bnry - converting an unsigned int to binary and print out
 * @b: unsigned int
 * @a: number of printed
 * Return: a.
 */
int prnt_bnry(va_list b, int a)
{
	unsigned int bb;
	int rmd = 0;

	bb = va_arg(b, unsigned int);

	if (bb == 0 || bb == 1)
	{
		_putchar(bb + 48), a++;
		return (a);
	}
	else
	{
		rmd = bb % 2;
		_putchar('1'), a++;
		a = sub_prnt_bnry(bb, a);
		_putchar(rmd + 48);
		a++;
	}
	return (a);
}

/**
 * sub_prnt_bnry - print out binary number
 * @bb: unsigned int number
 * @a: number of printed
 * Return: a.
 */
int sub_prnt_bnry(unsigned int bb, int a)
{
	if (bb / 2 > 1)
	{
		a = sub_prnt_bnry(bb /= 2, a);
		_putchar(bb % 2 + 48);
		a++;
	}
	return (a);
}
