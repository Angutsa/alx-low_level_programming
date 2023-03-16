#include <stddef.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t list
  * @head: head node
  * @index: index for node to find
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);

	while (node->prev != NULL)
	{
		node = node->prev;
	}

	for (pos = 0; node != NULL; pos++)
	{
		if (pos == index)
			return (node);

		node = node->next;
	}

	return (NULL);
}
