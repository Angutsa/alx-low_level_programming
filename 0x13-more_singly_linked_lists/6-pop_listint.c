#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t list
  * @head: pointer to a pointer to the head node
  * Return: returns the deleted_head_node->n or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	n = new->n;
	*head = new->next;
	free(new);
	return (n);
}
