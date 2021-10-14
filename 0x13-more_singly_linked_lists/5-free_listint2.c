#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
<<<<<<< HEAD
 *free_listint2-Frees memory occupied by a list.
 *@head:Pointer to the first node of the list.
=======
 *free_listint2 - Frees memory occupied by a list.
 *@head: Pointer to the first node o the list.
 *Return: Nothing.
>>>>>>> 2f66779db76fefdaaceef2aa0c0fbade269e73c8
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
{
free(head);
}
else
{


while (*head != NULL)
{
temp = (*head);
(*head) = (*head)->next;
free(temp);
}
head = NULL;
<<<<<<< HEAD
=======
}
>>>>>>> 2f66779db76fefdaaceef2aa0c0fbade269e73c8
}
