include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char char *_strcat(char *dest, char *src)
{
int count = 0;
int count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (*(src + count2) != '\0')
{
count2++;
}
return (dest + src);
}
