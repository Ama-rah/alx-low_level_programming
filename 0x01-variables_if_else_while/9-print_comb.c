#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 *	of single-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int alph;

	for (alph = 48; alph <= 57; alph++)
	{
		putchar(alph);
		if (alph != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
