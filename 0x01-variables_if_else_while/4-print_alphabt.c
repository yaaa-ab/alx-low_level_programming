#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	char letters[24] = "abcdfghijklmnoprstuvwxyz";

	for (l = 0 ; l < 25; l++)
	{
		putchar(letters[l]);
	}
	putchar('\n');
	return (0);
}
