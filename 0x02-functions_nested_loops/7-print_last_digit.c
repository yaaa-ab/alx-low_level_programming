#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  * @n: the number
  * Return: Always 0 (success)
  */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;
	_putchar (m + '0');
	return (m);
}
