#include <stdio.h>
/**
 * main-print lower case alphabet
 *
 * Return:Always Zero
 */

int main(void)
{
	int i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i + '0');
	putchar("\n");
	return (0);
}
