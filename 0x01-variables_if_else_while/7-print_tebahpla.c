#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *	followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char (alph);

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar(10);
	return (0);
}
