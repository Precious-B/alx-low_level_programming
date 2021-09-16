#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 *
 * @head: head of the linked list
 *
 * Return: returns the sum
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;
int sum = 0;
current = head;
while (current != NULL)
{
next = current->next;
sum += current->n;
current = next;
}
return (sum);
}
