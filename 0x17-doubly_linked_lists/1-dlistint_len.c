#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int count_elements(dlistint_t *h);

/**
  * dlistint_len - returns the number of elements in a dlistint_t list
  * @h: pointer to any node in the list
  * Return: the number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = NULL;
	int count = 0;

	head = (dlistint_t *) h;
	while (head->prev != NULL)
	{
		head = head->prev;
	}

	count = count_elements(head);
	return (count);
}

/**
  * count_elements - counts the nodes in the list from the head
  * @h: pointer to the head node of the list
  * Return: the number of nodes
  */
int count_elements(dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + count_elements(h->next));
}
