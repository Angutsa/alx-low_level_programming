#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * add_node_end - adds a new node at the end of the list
  * @head: pointer to a pointer of the list head
  * @str: string to duplicate and add to the list
  * Return: pointer to the head of the list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *n = *head;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (n->next != NULL)
	{
		n = n->next;
	}

	n->next = new;
	return (*head);
}
