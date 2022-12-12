#include <stdio.h>

/**
 * main - a program that prints all possible different
 *	combinations of three digits.
 *
 * Return: Always 0
 */

int main(void)
{
int alph;
int a;
int b;

for (alph = 0; alph < 8; alph++)
{
	for (a = alph + 1; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((alph % 10) + '0');
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (alph != 7)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}
	putchar (10);
	return (0);
}
