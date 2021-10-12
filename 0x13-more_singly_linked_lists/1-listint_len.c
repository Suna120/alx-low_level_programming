#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*listint_len - counts the number of elements
*@h: pointer to listint_t
*Return: number of nodes.
*/
size_t listint_len(const listint_t *h);
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
