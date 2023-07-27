#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: An intger typed by user
 *
 * Return: the value of the last digit
*/

int print_last_digit(int n)

{
	int nbr;

	nbr = n % 10;
	if (nbr < 0)
	{
		_putchar(-nbr + '0');
		return (-nbr);
	}
	else
	{
		_putchar(nbr + '0');
		return (nbr);
	}
}
