#include "monty.h"

/**
 * swap_nodes_values - Exchange top two nodes values
 * @head: Head
 * @counter: LIne Counter
*/
void swap_nodes_values(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0, swap;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	swap = hd->n;
	hd->n = hd->next->n;
	hd->next->n = swap;
}
