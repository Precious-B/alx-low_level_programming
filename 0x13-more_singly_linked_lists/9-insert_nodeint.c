#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: the head of a singly linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list
 * and returns 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
  struct listint_t *new, *old, *tmp;
  unsigned int i = 1;
  if (head == NULL)
    return (NULL);
  new = malloc(sizeof(listint_t));
  if (new == NULL)
    return (NULL);
  new->n = n;
  new->next = NULL;
  if (
}
