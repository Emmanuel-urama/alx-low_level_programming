#include <stdio.h>
/**
 * main-print lower case alphabet
 *
 * Return:Always Zero
 */

int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
