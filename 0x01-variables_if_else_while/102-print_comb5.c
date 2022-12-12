#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 *	of two two-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int alph;

	for (alph = 0; alph < 99; alph++)
	{
		int alph1;

		for (alph1 = alph + 1; alph1 < 100; alph1++)
		{
			putchar((alph / 10) + '0');
			putchar((alph % 10) + '0');
			putchar(' ');
			putchar((alph1 / 10) + '0');
			putchar((alph1 % 10) + '0');

			if (alph != 98)
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

