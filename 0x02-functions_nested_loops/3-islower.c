#include "main.h"
/**
 * _islower - checks alphabet
 *
 * @c:parameter to be checked
 *
 * Return: alpbaets both lower and upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
