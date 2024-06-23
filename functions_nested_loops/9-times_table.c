#include "main.h"

/**
 * times_table - prints the 9 times table, starting whith 0.
 */
void times_table(void)

{
	int row, col, prod;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			prod = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

				if (prod < 10 && col != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
			}
				else if (prod >= 10)
				{
					_putchar(' ');
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);
				}
				else
				{
					_putchar('0' + prod);
				}
		}
		_putchar('\n');
	}
}
