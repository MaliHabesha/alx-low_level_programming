#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
	void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
