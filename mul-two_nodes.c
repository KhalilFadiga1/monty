#include "monty.h"

/**
 * mul_two_nodes - Product of top two nodes of the stack.
 * @head: Head Node
 * @counter: Counter
 * Return: void
*/
void mul_two_nodes(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	temp = hd->next->n * hd->n;
	hd->next->n = temp;
	*head = hd->next;
	free(hd);
}
