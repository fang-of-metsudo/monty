#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>

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
 * struct arguement_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @flag: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct arguement_s
{
	char *arg;
	FILE *file;
	char *content;
	int flag;
}  arg_list;

extern arg_list arg_new;

void pall(stack_t **stack, unsigned int line_number);
int execute(char *content, stack_t **stack, unsigned int line_number, FILE *file);
void nop(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void addnode(stack_t **head, int n);
void add(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void push(stack_t **head, unsigned int line_number);
void free_stack(stack_t *head);
void pop(stack_t **head, unsigned int line_number);

#endif

