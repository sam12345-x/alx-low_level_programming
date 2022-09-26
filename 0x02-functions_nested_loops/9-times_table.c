#include "main.h"

/**
 * time_table - prints the 9 times table, starting with zero
 *
 *Return nothing
 */

void times_table(void)
{
	int n, mult, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('n');

		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			if (prod <= 0)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
