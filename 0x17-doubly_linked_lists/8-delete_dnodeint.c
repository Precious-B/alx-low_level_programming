#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes
 * the node @index of a dlistint_t linked list
 *
 * @head: head of the linked list
 *
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded
 * or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
if (head == NULL)
return (-1);
current = *head;
if (current == NULL)
return (-1);
while (index != 0)
{
current = current->next;
index--;
if (current == NULL)
return (-1);
}
if (current->prev != NULL)
current->prev->next = current->next;
else
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
}
return (1);
}
