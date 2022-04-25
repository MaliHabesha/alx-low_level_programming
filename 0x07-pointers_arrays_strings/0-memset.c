#include "main.h"
#include <stdio.h>


/**
 * _memset - fills memory with a constant byte,
 * @s: memory area returning pointer.
 * @b: constant byte.
 * @n: funtin bytes to be filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
