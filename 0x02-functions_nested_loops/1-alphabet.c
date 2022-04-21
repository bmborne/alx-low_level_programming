#include "main.h"

/*
 *main - Entry Point
 *main.h function included
 * returtn 0 as success
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
