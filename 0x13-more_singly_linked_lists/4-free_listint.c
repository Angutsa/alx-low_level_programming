#include "lists.h"

/**
  * free_listint - frees a listint_t
  * @head: pointer to head node
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}
