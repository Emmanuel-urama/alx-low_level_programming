#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: The string to be returned
 * Return: The string lenght
 */

int _strlen_recursion(char *s)
{
	int longt = 0;

	if (*s)
	{
		longt++;
		longt += _strlen_recursion(s + 1);
	}
	return (longt);
}
