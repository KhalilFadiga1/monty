#include "monty.h"

/**
 * queue - Prints top of the stack
 * @head: First node
 * @counter: count number of lines
*/
void queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * add_queue - appends new node to the tail stack
 * @n: Integer of the new node
 * @head: Linked list head
*/
void add_queue(stack_t **head, int n)
{
	stack_t *nodes, *temp;

	temp = *head;
	nodes = malloc(sizeof(stack_t));
	if (nodes == NULL)
	{
		printf("Error\n");
	}
	nodes->n = n;
	nodes->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = nodes;
		nodes->prev = NULL;
	}
	else
	{
		temp->next = nodes;
		nodes->prev = temp;
	}
}
