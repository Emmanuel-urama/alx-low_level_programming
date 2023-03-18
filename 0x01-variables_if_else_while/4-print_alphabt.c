#include <stdio.h>
/**
 * main-This program prints alphabets except q and e
 *
 * Return:zero if all things are equal
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
