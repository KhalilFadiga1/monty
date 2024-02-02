#include "monty.h"

/**
* empty_list - Removes all nodes from the list
* @head: Nodes' head
*/
void empty_list(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
