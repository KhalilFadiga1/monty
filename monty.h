#ifndef _MONTY_H_
#define _MONTY_H_
#define _GNU_SOURCE
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;

extern bus_t bus;

void perform_nothing(stack_t **head, unsigned int counter);
void sub_nodes_values(stack_t **head, unsigned int counter);
void div_two_nodes(stack_t **head, unsigned int counter);
void mul_two_nodes(stack_t **head, unsigned int counter);
void mod_two_nodes(stack_t **head, unsigned int counter);
char *clean_line(char *content);
void push_to_stack(stack_t **head, unsigned int counter);
void print_stack(stack_t **head, unsigned int counter);
ssize_t getstdin(char **lineptr, int file);
int execute(stack_t **head,char *content, FILE *file, unsigned int counter);
void add_queue(stack_t **head, int n);
void queue(stack_t **head, unsigned int counter);
void list(stack_t **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
void prints_top_node(stack_t **head, unsigned int counter);
void print_string(stack_t **head, unsigned int counter);
void rot_top(stack_t **head, unsigned int counter);
void rot_bottom(stack_t **head, __attribute__((unused)) unsigned int counter);
void append_node(stack_t **head, int n);
void empty_list(stack_t *head);
void pop_top_node(stack_t **head, unsigned int counter);
void swap_nodes_values(stack_t **head, unsigned int counter);
void add_nodes_values(stack_t **head, unsigned int counter);
void print_char(stack_t **head, unsigned int counter);

#endif

