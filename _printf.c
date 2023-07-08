#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: input arguments list and types.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, j, arg = 0;
	prn_t pr[] = {
		{"c", prnt_char},
		{"s", prnt_string}
	};
	va_list pri;

	va_start(pri, format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			arg++;
			i++;
		}
		else if (format[i] == '%')
		{
			for (j = 0; pr[j].p[0] != '\0'; j++)
			{
				if (pr[j].p[0] == format[i + 1])
					arg = pr[j].pf(pri, arg);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			arg++;
		}
	}
	va_end(pri);
	return (arg);
}
	
