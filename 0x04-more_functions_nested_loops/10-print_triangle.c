#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, spaces;

		for (i = 1; i <= size; i++)
		{
			spaces = size - i;

/* Print the spaces before the triangle */
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
/* Print the '#' characters for the triangle */
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
		}
	}
}
