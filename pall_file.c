#include "monty.h"

/**
 * print_stack - Prints the Stack Data
 * @head: Head of the stack
 * @counter: void
 */
void print_stack(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
