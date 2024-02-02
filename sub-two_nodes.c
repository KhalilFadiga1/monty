#include "monty.h"

/**
  * sub_nodes_values - subtracting top two nodes's value
  * @head: Head node
  * @counter: number of node
 */
void sub_nodes_values(stack_t **head, unsigned int counter)
{
	int sub, count;
	stack_t *temp;

	temp = *head;
	for (count = 0; temp != NULL; count++)
		temp = temp->next;
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}
