#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: none
 */

void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			multi = i * j;
			_putchar(',');
			_putchar(' ');
			if (multi <= 9)
			{
				_putchar(' ');
				_putchar(multi + 0);
			}
			else
			{
				_putchar((multi / 10) + 0);
				_putchar((multi % 10) + 0);
			}
		}
		_putchar('\n');
	}
}
