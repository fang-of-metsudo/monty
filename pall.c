#include "monty.h"

/**
 * pall - prints all elements of a stack
 * @stack: pointer to head
 * @line_number: where the instruction appears
 * Return: void
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
