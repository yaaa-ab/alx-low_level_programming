#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  * @i: the number
  * Return: Always 0 (success)
  */
int print_last_digit(int i)
{
	int m = i % 10;

	if (m < 0)
		m *= -1;
	_putchar (m + '0');
	return (0);
}
