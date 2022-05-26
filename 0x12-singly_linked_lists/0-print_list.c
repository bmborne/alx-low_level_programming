#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - is a function that prints all elements of a list_t list
 * @h: is the string input
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
site_t i;
for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
}
return (i);
}
