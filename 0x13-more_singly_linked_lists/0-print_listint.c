#include "lists.h"
/**
*print_listint - prints all elements in listint_t list
*@h: pointer to listint_t
*Return: count.
*/
size_t print_listint(const listint_t *h)
{
size_t count= 0;
while (h != NULL)
{
printf("%d\n", h->n);
h= h->next;
count++;
}
return (count);
}
