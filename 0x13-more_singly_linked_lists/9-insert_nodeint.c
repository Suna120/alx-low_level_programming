#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a node at a given position.
 *@head: Pointer to the listint_t.
 *@idx: Index to add new nodes. starts at 0.
 *@n: Number of nodes.
 *
 *Return: If the function fails - NULL
 *        Otherwise - Address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *temp = *head;
unsigned int nodeint = 0;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;

if (idx == 0)
{

*head = newNode;
newNode->next = temp;
return (newNode);
}

while (nodeint < (idx - 1))
{
nodeint++;
if (temp == NULL || temp->next == NULL)
return (NULL);
temp = temp->next;
}

newNode->next = temp->next;
temp->next = newNode;
return (newNode);
}
