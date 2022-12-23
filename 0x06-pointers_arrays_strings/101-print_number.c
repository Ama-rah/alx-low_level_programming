#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	print_uint((unsigned int) n);
}

/**
 * print_uint - Program that Prints an unsigned integer.
 *
 * @n: The unsigned int to print.
 *
 * Return: Sucess
 */

void print_uint(unsigned int n)
{
	if (n / 10 != 0)
		print_uint(n / 10);
	_putchar(n % 10 + '0');
}
