#include "monty.h"
/**
 * prints_top_node - Prints Top Node
 * @head: Head
 * @counter: Count lines
*/
void prints_top_node(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
