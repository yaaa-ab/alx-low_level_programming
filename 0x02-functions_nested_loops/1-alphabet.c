#include "main.h"

/**
 * print_alphabet - to print alphabet in lower case
 *
 */
void print_alphabet(void)
{
	int i;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
