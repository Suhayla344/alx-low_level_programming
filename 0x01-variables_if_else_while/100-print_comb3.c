#include <stdio.h>

/**
 * main - Entry point
 * Description: The more brains you use, the less material you need
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	for (j = 0 ; j <= 9 ; j++)
	if (i != j && i < j)
	putchar(i + 48);
	putchar(j + 48);
	if (i + j != 17)
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
