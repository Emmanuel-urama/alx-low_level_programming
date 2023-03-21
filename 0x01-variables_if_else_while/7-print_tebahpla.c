#include <stdio.h>
/**
 * main -main program
 *
 * Return:always zero
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
