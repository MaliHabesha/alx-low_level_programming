#include "main.h"
#include <stdio.h>
/**
 * _strlen - function with 1 argument
 * @s: char type pointer
 *
 * Description: strlen similiar function to return length
 * Return: string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
