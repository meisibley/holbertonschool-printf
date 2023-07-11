#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef struct prnt
{
	char *p;
	int (*pf)(va_list, int);
} prn_t;

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int prnt_char(va_list c, int a);
int prnt_string(va_list s, int a);
int prnt_doi(va_list doi, int a);
int prnt_unint(unsigned int n, int a);
int prnt_bnry(va_list b, int a);
int sub_prnt_bnry(unsigned int bb, int a);

#endif
