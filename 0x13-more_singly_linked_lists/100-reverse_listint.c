#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp, *tmp2;
if (*head == NULL)
return (NULL);
tmp = *head;
while (tmp->next != NULL)
{
tmp2 = tmp->next;
tmp->next = tmp2->next;
tmp2->next = *head;
*head = tmp2;
}
return (*head);
}
