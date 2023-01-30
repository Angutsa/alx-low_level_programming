#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - adds a new node at the beginning of the list
  * @head: pointer to a pointer of the list head
  * @str: string to duplicate and add tot he list
  * Return: pointer to the head of the list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
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
	new->next = *head;
	*head = new;

	return (*head);
}
