#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that prints multiplication of args
  * @argc: count of arguments
  * @argv: argument vector
  *
  * Return: always zero
  */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", i * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
