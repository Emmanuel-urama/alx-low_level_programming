#include "main.h"
/**
 * _memcpy - Fuction that copies memory
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
