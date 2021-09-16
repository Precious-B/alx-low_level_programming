#include "lists.h"

/**
 * print_dlistint - a function that prints a doubly linked list
 *
 * @h: the doubly linked list
 *
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
printf("%i\n", current->n);
current = current->next;
count++;
}
return (count);
}
