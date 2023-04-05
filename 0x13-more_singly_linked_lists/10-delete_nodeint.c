#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (i == index - 1)
		{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
