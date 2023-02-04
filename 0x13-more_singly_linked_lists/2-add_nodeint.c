#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to a pointer to the head node
  * @n: value for new_node->n
  * Return: Pointer to the head of the list or NULL on failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
