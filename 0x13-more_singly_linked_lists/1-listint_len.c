#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_listint - prints all elements of listint_t
*@h: pointer to listint_t
*Return: number of nodes.
*/
size_t listint_len(const listint_t *h);
{
size_t count;
count = 0;
while (h !=NULL)
{
count++;
h= h->next;
}
return (count);
}
