#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: head of the doubly linked list
 *
 * @n: doubly linked list
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current;
dlistint_t *new_node;
current = *head;
while (current && current->next != NULL)
current = current->next;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = current;
if (current)
current->next = new_node;
else
*head = new_node;
return (new_node);
}
