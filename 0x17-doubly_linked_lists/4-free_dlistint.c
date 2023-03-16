#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  * free_dlistint - frees a dlistint_t list
  * @head: head node
  */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
