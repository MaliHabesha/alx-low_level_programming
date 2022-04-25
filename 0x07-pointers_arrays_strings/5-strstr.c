#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: the first occurrence of the in entire string.
 * @needle: the first occurrence of the substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
				return ('\0');
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}

