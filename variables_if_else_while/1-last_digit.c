#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l_digi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digi = n % 10;

	if (l_digi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digi);
	}

	else if (l_digi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digi);
	}

	else if (l_digi < 6 && l_digi != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digi);
	}

	return (0);
}
