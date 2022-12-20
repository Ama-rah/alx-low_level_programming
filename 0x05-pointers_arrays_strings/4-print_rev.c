#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0, j, n;

	while (s[i] != '\0')
	{
		i++;
	}

	n = i;

	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar(10);
}
