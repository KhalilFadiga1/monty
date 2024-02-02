#include "monty.h"

/**
 * print_string - prints the string starting at the top of the stack
 * @head: Beginning Node
 * @counter: node count
*/
void print_string(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
		{
			break;
		}
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
