#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: an integr input.
 * Return: the absolute value of an integer, -1 -> 1.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
