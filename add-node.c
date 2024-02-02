#include "monty.h"
/**
 * append_node - add new element to the beginning of list
 * @head: List head node
 * @n: new node number
*/
void append_node(stack_t **head, int n)
{

	stack_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = node;
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
}
