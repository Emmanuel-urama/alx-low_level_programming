#include <stdio.h>
/**
 * main-return main
 *
 * Return:zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
