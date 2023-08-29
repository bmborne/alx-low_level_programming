#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int a, b, rep;

a = 0;
for (a = 0; a <= 9; a++){
	b = 0;
	for (b=0; b <= 9; b++){
		rep = a * b;
		if (b == 0){
			_putchar('0' + rep);
		}
		else if (rep < 10){
			_putchar(' ');
			_putchar('0' + rep);
		}
		else {
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		
		if (b < 9){
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}


}
