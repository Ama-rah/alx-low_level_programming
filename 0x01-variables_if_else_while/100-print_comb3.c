#include <stdio.h>

/**
 * main - a program that prints all possible different
 *	combinations of two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int alph;
	int q;

	for (alph = 0; alph < 9; alph++)
	{
		putchar((alph % 10) + '0');
		putchar((q % 10) + '0');

		if (alph != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
