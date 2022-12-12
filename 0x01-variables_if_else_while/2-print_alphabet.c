#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 *	and then in uppercase, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}
	putchar('\n');
	return (0);
}
