#include "main.h"

/**
 * print_square - Print a square
 * @size: The size of the square
 */

void print_square(int size)
{
	int hgt, wdt;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wdt = 0; wdt < size; wdt++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
