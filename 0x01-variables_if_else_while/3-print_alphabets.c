#include <stdio.h>
/**
 * main - Entry point
 * Description: alphABET
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);

	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
