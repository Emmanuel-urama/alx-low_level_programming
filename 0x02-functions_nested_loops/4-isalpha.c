#include "main.h"
/**
 * _isalpha - checks alphabet
 *
 * @c:parameter to be checked
 *
 * Return: alpbaets both lower and upper
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
