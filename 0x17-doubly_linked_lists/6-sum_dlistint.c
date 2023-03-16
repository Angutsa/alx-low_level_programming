#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int add_elements(dlistint_t *h);

/**
  * sum_dlistint - returns the suum of elements in a dlistint_t list
  * @h: pointer to any node in the list
  * Return: the sum of elements
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = NULL;
	int sum = 0;

	h = head;
	while (h->prev != NULL)
	{
		h = h->prev;
	}

	sum = add_elements(h);
	return (sum);
}

/**
  * add_elements - adds the elements in all the nodes in the list from the head
  * @h: pointer to the head node of the list
  * Return: the sum of elements
  */
int add_elements(dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (h->n + add_elements(h->next));
}
