#include <stdio.h>

/**
 * main - Emtry point
 * Description:
 * Return: 0 Always (success)
 */

int main(void)
{
	int i = 122;

	while (i != 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
