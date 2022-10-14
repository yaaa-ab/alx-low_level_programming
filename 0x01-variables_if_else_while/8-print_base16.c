#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	char letters[26] = "0123456789abcdef";

	for (l = 0 ; l < 16; l++)
	{
		putchar(letters[l]);
	}
	putchar('\n');
	return (0);
}
