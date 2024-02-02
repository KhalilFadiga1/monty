#include "monty.h"

/**
 * pop_top_node - remove top node
 * @head: stack head
 * @counter: line counter
*/
void pop_top_node(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	*head = hd->next;
	free(hd);
}
