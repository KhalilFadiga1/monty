#include "monty.h"

/**
 * div_two_nodes - Find the quotient of top two elements of the stack.
 * @head: First element of the stack
 * @counter: count the elements in the stack
 * Return: void
*/
void div_two_nodes(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0, temp;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	if (hd->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	temp = hd->next->n / hd->n;
	hd->next->n = temp;
	*head = hd->next;
	free(hd);
}

