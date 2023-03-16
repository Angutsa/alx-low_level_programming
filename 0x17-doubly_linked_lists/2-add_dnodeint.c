#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list
  * @head: list head node
  * @n: element to add to linked list
  * Return: new element or NULL if it fails
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *h = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		h = *head;
		while (h->prev != NULL)
		{
			h = h->prev;
		}
		new_node->next = h;
		h->prev = new_node;
	}

	new_node->n = n;
	new_node->prev = NULL;
	return (new_node);
}
