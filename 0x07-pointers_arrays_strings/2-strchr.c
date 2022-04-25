#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string,
 * @s: Returns a pointer to the first occurrence of the string.
 * @c: Returns a pointer to the first occurrence of the character.
 * Return: returns NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
