#include "lists.h"
#include <stdio.h>

/**
  * list_len - prints number of elements of a list_t list
  * @h: pointer to the head node of the list
  * Return: the number of elements in linked list
  */
size_t list_len(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		return (0);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
