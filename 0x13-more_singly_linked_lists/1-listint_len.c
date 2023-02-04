#include "lists.h"
#include <stdio.h>

/**
  * listint_len - prints the number elements of a listint_t list
  * @h: pointer to the head of the list
  * Return: number of elements in list
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	count++;
	count += listint_len(h->next);

	return (count);
}
