#include "monty.h"
/**
  * rot_bottom - rotates the nodes to the bottom
  * @head: List head
  * @counter: count elements
  * Return: void
 */
void rot_bottom(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *dup;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;
}
