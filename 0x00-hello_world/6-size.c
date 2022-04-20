#include <stdio.h>
/**
 * 
 * 
 * 
 */

int main(void)
{
        char c;
        int i;
        long int e;
        long long int d;
        float f;

        printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
        printf("Size of a int: %lu.\n", (unsigned long)sizeof(i));
        printf("Size of a long int: %lu.\n", (unsigned long)sizeof(e));
        printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(d));
        printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));

        return(0);
}
