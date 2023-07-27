#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * description: adding the previous two terms.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int a, b, fn, afn;

	a = 1;
	b = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = a + b;
		a = b;
		b = fn;
		if ((a % 2) == 0)
		{
			afn += a;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
