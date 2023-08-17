#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all input
 * @format:  is a list of types of arguments passed to the function
 * Return:
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c;
	char *s;

	i = 0;
	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", (float) va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				s = "(nil)";
				printf("%s", s);
			}
			i++;
		}
	}
	va_end(args);
	printf("\n");
}

