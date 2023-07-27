#include "main.h"

/**
 * print_most_numbers - print 0 - 9.
 * Description: prints the numbers, from 0 to 9 expecting 2 and 4.
 * Return: Always 0 (Success).
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i += 1;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
