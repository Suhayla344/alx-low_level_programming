#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: This is a character in ASCII code.
 *
 * Return: Always 1 (Lowercase) and 0 for (the rest).
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);

	_putchar('\n');
}
