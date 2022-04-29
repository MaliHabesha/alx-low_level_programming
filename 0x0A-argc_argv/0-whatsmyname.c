#include "stdio.h"

/**
 * main - function with two arguments
 * @argc: int type argument
 * @argv: char type pointer array argument
 *
 * Description: prints all arguments it recieves
 * Return: void
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
