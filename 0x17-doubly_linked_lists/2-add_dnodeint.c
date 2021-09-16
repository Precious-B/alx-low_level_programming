#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list
 *
 * @head: head of the doubly linked list
 *
 * @n: linked list
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
