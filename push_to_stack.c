#include "monty.h"
/**
 * push_to_stack - append an element to stack
 * @head: beginning of stack
 * @counter: line_number
*/
void push_to_stack(stack_t **head, unsigned int counter)
{
	int x, y = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] < 48 || bus.arg[y] > 57)
				flg = 1;
		}
		if (flg == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			empty_list(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		empty_list(*head);
		exit(EXIT_FAILURE);
	}
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		append_node(head, x);
	else
		add_queue(head, x);
}
