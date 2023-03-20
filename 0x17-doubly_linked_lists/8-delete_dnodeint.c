#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a new node at a given position
  * @head: pointer to node in the list
  * @idx: index of the node to be deleted
  * Return: Returns 1 on success and -1 on fail
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_node = NULL, *del_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	del_node = get_dnodeint_at_index(*head, index);
	if (del_node == NULL)
		return (-1);

	if (del_node->prev == NULL)
	{
		cur_node = del_node->next;
		cur_node->prev = NULL;
		printf("--> Head: Current Node: %d\n", cur_node->n);
		printf("--> Next Node: %d\n\n", (cur_node->next)->n);
		printf("--> Next Next Node: %d\n", ((cur_node->next)->next)->n);
	}
	else if (del_node->next == NULL)
	{
		cur_node = del_node->prev;
		cur_node->next = NULL;
		printf("--> Tail: Current Node: %d\n", cur_node->n);
		printf("--> Previous Node: %d\n\n", (cur_node->prev)->n);

	}
	else
	{
		cur_node = del_node->prev;
		cur_node->next = del_node->next;
		printf("--> Mid: Current Node: %d\n", cur_node->n);
		printf("--> Previous Node: %d\n", (cur_node->prev)->n);
		printf("--> Next Node: %d\n\n", (cur_node->next)->n);

		cur_node = del_node->next;
		cur_node->prev = del_node->prev;
		printf("--> Current Node: %d\n", cur_node->n);
		printf("--> Previous Node: %d\n", (cur_node->prev)->n);
		printf("--> Next Node: %d\n\n", (cur_node->next)->n);

	}

	free(del_node);
	return (1);
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
