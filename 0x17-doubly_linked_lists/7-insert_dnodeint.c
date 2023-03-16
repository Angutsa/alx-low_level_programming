#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: pointer to node in the list
  * @idx: index of the list where the new node is to be inserted
  * @n: element of the new node
  * Return: Returns the address of the new node or NULL if it fails
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur_node = NULL, *new_node = NULL, *head = *h;

	if ((h == NULL || *h == NULL) && (idx != 0))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	
	if ((h == NULL || *h == NULL) && (idx == 0))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
		
	cur_node = get_dnodeint_at_index(head, idx);
	if (cur_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = cur_node;
	new_node->prev = cur_node->prev;
	cur_node->prev = new_node;
	cur_node = new_node->prev;
	cur_node->next = new_node;
	return (new_node);
}


/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t list
  * @head: head node
  * @index: index for node to find
  * Return: Returns the node at the nth position
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
