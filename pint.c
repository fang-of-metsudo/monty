#include "monty.h"

/**
 * pint - prints the top
 * @head: stack head
 * @line_number: where the instruction appears
 * Return: no return
*/
void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(arg_new.file);
		free(arg_new.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * pop - prints the top
 * @head: stack head
 * @line_number: where the instruction appears
 * Return: no return
*/
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(arg_new.file);
		free(arg_new.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
