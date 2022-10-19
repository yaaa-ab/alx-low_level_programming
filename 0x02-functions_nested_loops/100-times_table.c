#include "main.h"

/**
 * print_times_table - Prints the times table of the input.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, mult, resu;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				resu = num * mult;

				if (resu <= 99)
					_putchar(' ');
				if (resu <= 9)
					_putchar(' ');

				if (resu >= 100)
				{
					_putchar((resu / 100) + '0');
					_putchar(((resu / 10)) % 10 + '0');
				}
				else if (resu <= 99 && resu >= 10)
				{
					_putchar((resu / 10) + '0');
				}
				_putchar((resu % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

