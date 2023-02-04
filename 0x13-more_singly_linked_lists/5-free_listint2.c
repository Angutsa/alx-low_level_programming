#include "lists.h"

/**
  * free_listint2 - frees a listint_t and sets head to NULL
  * @head: pointer to head node
  */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	if ((*head)->next != NULL)
		free_listint2(&((*head)->next));

	free(*head);
	*head = NULL;
}
