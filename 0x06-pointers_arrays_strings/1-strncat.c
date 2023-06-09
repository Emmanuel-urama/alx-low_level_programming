#include "main.h"
/**
 * _strncat - concatenate numbers
 * @dest: destination code
 * @src: source code
 * @n: required lenght
 * Return: returns destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
			dest[dest_len++] = src[index];
	return (dest);
}
