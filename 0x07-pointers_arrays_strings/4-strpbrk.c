#include "main.h"
/**
 * _strpbrk - searches strings
 * @s: string one
 * @accept: string two
 * Return: Always zero
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
	s++;
	}
	return ('\0');
}
