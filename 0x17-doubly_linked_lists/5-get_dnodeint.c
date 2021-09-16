#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the linked list
 *
 * @index: index of the node starting from 0
 *
 * Return: returns the nth node
 * or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
if (head == NULL)
return (0);
current = head;
while (index != 0)
{
current = current->next;
index--;
if (current == NULL)
return (0);
}
return (current);
}
