#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_list - frees a list_t list
  * @head: pointer to the first node
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
