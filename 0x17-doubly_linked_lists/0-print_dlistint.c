#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int print_elements(dlistint_t *h);

/**
  * print_dlistint - prints the elements in a dlistint_t list
  * @h: pointer to any node in the list
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = NULL;
	int count = 0;

	head = (dlistint_t *) h;
	while (head->prev != NULL)
	{
		head = head->prev;
	}

	count = print_elements(head);
	return (count);
}

/**
  * print_elements - counts the nodes in the list from the head
  * @h: pointer to the head node of the list
  * Return: the number of nodes
  */
int print_elements(dlistint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_elements(h->next));
}
