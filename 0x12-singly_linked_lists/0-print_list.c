#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list_t list
  * @h: pointer to the head node of the list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int n = 0;

	if (h->str == NULL)
		printf("[0] (nil)");

	while (h)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
