#include "lists.h"
#include <stdlib.h>

/*
 *delete_nodeint_at_index: a function that deletes the node at index index 
 *of a listint_t linked list.
 *@head: Pointer to a pointer that points to the head of the node.
 *@index: Index of the node to delete.
 *Return: 1 if successful, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *curr_node;
listint_t *next;
unsigned int i;
if (!head || !(*head))
{
return (-1);
}
curr_node = (*head);
if (!index)
{
(*head) = curr_node->next;
free(curr_node);
return (1);
}
for (i = 0; curr_node && i < index - 1; i++)
{
curr_node = curr_node->next;
}
if (!curr_node || !(curr_node->next))
{
return (-1);
}  
next = curr_node->next->next;
free(curr_node->next);
curr_node->next = next;
return (1);
}
