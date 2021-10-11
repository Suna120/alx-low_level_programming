#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_listint - prints list of elements
*@h: pointer to listint
*Return: Always 0.
*/
size_t print_listint(const listint_t *h)
{
size_t = 0;
while (h !=NULL)
{
printf("%d\n", h->n);
count++;
h= h->next;
}
return (0);
}


