#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lower and upper alphabet on the same line
 * Return: 0
 */
int
main(void)
{
	int n;

	for (n = 0; n < 26; ++n)
	{
		if (n != 'e' && n != 'q')
			putchar (n);
	}
	putchar ('\n');

	return (0);
}
