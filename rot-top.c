#include "monty.h"

/**
  * rot_top - rotates the last node to the top
  *@head: Nodes' head
  *@counter: count node
 */
void rot_top(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *dup;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	dup = (*head)->next;
	dup->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = dup;
}
