#include "main.h"
/**
  *print_alphabet_x10 - to print lower case alphabets 10 times
  */
void print_alphabet_x10(void)
{
	int i = 1;
	char alpha;

	while (i < 11)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
