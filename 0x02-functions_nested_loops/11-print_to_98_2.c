#include <stdio.h>
#include "main.h"

/**
 * print_to_98 : Prints all values greater or less that 98
 * 
 * Return : void
*/

void print_to_98(int n){
    int i;
    for (i=n; i<98; i++){
        printf("%i, ", i);

    }
    for (i=n; i>98; i--){
        printf("%i, ", i);
    }
    printf("98");
    putchar('\n');
}