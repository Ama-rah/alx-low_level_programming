#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *	starting from 0, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int alph;

	for (alph = 48; alph <= 57; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
