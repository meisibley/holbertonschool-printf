#include "main.h"

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
