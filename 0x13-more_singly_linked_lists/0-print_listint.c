#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: pointer to the head of the list
  * Return: number of elements in list
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	printf("%d\n", h->n);
	count++;
	count += print_listint(h->next);

	return (count);
}
