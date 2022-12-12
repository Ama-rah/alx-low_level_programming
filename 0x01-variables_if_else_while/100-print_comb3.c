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
		for (d = ch + 1; d < 10; d++)
		{
			putchar((alph % 10) + '0');
			putchar((q % 10) + '0');

			if (alphh != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar(10);
	return (0);
}
