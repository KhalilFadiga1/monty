#include "monty.h"

/**
 * modulo_of_nodes - Calculate mod of the first two nodes
 * @head: Header Element
 * @counter: count number of nodes in the stack
*/
void mod_two_nodes(stack_t **head, unsigned int counter)
{
	int temp, length = 0;
	stack_t *hd;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	temp = hd->next->n % hd->n;
	hd->next->n = temp;
	*head = hd->next;
	free(hd);
}
