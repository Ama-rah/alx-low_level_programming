#include "main.h"

/**
 * print_square - This is a function that prints a square,
 *	followed by a new line.
 *
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
