#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *	followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int q = 48;

	while (q <= 102)
	{
		putchar(q);

		if (q == 57)
			q += 39;
		++q;
	}
	putchar ('\n');
	return (0);
}
