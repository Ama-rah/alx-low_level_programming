#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *	followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int b;

	for (b = 122; b >= 97; b--)
	{
		putchar(b);
	}
	putchar(10);
	return (0);
}
