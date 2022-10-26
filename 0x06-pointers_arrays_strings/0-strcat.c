#include "main.h"

/**
 * strcat - Concatenates strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @d.
 *
 * Return: A pointer to the dination string @d.
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, d = 0;

	while (dest[i++])
		d++;

	for (i = 0; src[i]; i++)
		dest[d++] = src[i];

	return (dest);
}
