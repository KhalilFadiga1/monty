#include "monty.h"

/**
* execute - executes the opcode
* @head: head of list
* @script: strings of a line
* @file: Addr to the file
* @count: Count number of elements in the list
*/
int execute(stack_t **stack, char *content, FILE *file,  unsigned int counter)
{
	instruction_t opst[] = {
				{"push", push_to_stack},
				{"pall", print_stack},
				{"pint", prints_top_node},
				{"pop", pop_top_node},
				{"swap", swap_nodes_values},
				{"add", add_nodes_values},
				{"nop", perform_nothing},
				{"sub", sub_nodes_values},
				{"div", div_two_nodes},
				{"mul", mul_two_nodes},
				{"mod", mod_two_nodes},
				{"pchar", print_char},
				{"pstr", print_string},
				{"rotl", rot_top},
				{"rotr", rot_bottom},
				{"queue", queue},
				{"stack", list},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && op)
	{
		if (strcmp(op, opst[x].opcode) == 0)
		{	opst[x].f(stack, counter);
			return (0);
		}
		x++;
	}
	if (op && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		empty_list(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
