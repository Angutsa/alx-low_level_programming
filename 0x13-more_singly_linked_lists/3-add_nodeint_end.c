#include "lists.h"
#include <stdio.h>

/**
  * add_nodeint_end - adds a new node at the end of the list
  * @head: pointer to a pointer to the head node
  * @n: value for new_node->n
  * Return: pointer to the new node or NULL on failure
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}

	if ((*head)->next == NULL || *head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;
		(*head)->next = new;
	}
	else
	{
		new = add_nodeint_end(&((*head)->next), n);
	}

	return (new);
}
