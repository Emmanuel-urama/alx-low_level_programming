#include <stdio.h>
/**
 * main-This program prints Alphabets
 *
 * Return:zero if all thing were good
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
