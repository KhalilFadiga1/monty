#include "monty.h"
/**
 * print_char - Prints the character at the top of the stack
 * @head: first node
 * @counter: count number of nodes
*/
void print_char(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	hd = *head;
	if (!hd)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	if (hd->n > 127 || hd->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hd->n);
}
