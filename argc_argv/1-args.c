#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of command
 * @argv: array of command
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
