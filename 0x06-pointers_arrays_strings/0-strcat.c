#include "main.h"
#include <stdio.h>
/**
 * strcat - Concatenates strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @d.
 *
 * Return: A pointer to the dination string @d.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, d;

	while (dest[i])
		i++;

	for (d = 0; src[d]; d++)
	{
		dest[i] = src[d];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
