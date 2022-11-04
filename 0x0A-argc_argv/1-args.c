#include "main.h"
#include <stdio.h>
/**
  * main - a program that prints num of arg
  * @argc: count of arguments
  * @argv: argument vector
  *
  * Return: always zero
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
