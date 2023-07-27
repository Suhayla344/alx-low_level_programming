#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer.
 *
 * Return: none
 */

void jack_bauer(void)
{
	int h, h1, m, m1;

	for (h = 0 ; h <= 2 ; h++)
	{
		for (h1 = 0 ; h1 <= 9 ; h1++)
		{
			for (m = 0 ; m <= 5 ; m++)
			{
				for (m1 = 0 ; m1 <= 9 ; m1++)
				{
					if (h >= 1 && h1 >= 4)
						break;
					_putchar(h + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(m1 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
