#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int dh;
	int ndhs = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	dh = atoi(argv[1]);

	while (dh > 0)
	{
		if (dh >= 25)
		dh -= 25;
		else if (dh >= 10)
		dh -= 10;
		else if (dh >= 5)
		dh -= 5;
		else if (dh >= 2)
		dh -= 2;
		else if (dh >= 1)
		dh -= 1;
		ndhs += 1;
	}
	printf("%d\n", ndhs);
	return (0);
}
