#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a
 * new node at a given position
 *
 * @h: head of the linked list
 *
 * @idx: index, where the new node should be added
 *
 * @n: the data of the new node
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current;
dlistint_t *new;
if (h == NULL)
return (0);
current = *h;
while (idx != 0)
{
current = current->next;
idx--;
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = current;
new->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new;
return (current);
}
