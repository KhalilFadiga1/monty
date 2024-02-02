#include "monty.h"

/**
 * add_nodes_values - Sum top two nodes' values of the stack and
 * delete the head
 * @head: Head
 * @counter: Count Lines
*/
void add_nodes_values(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0, total;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                empty_list(*head);
                exit(EXIT_FAILURE);
        }
	hd = *head;
	total = hd->n + hd->next->n;
	hd->next->n = total;
	*head = hd->next;
	free(hd);
}

