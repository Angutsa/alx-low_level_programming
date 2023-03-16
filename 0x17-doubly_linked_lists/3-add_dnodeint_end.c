#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: list head node
  * @n: element to add to linked list
  * Return: new element or NULL if it fails
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *h = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		new_node->prev = h;
		h->next = new_node;
	}

	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
