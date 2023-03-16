#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
