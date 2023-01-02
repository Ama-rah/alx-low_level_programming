#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *	substrings
 * @needle: subtring to search for
 *
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
