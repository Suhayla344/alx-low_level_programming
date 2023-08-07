#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *bh;
	char *pn;

	while (*haystack != '\0')
	{
		bh = haystack;
		pn = needle;

		while (*haystack != '\0' && *pn != '\0' && *haystack == *pn)
		{
			haystack++;
			pn++;
		}
		if (!*pn)
		return (bh);
		haystack = bh + 1;
	}
	return (0);
}
