#include <stdio.h>

/**
 * main - Emtry point
 * Description: 'I never thought that it would pay off'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
}
	putchar('\n');
	return (0);
}
