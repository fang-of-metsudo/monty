#include "monty.h"

/**
 * push - add node to the stack
 * @head: stack head
 * @line_number: where the instruction appears
 * Return: no return
*/
void push(stack_t **head, unsigned int line_number)
{
	int n, j = 0, flag = 0;

	if (arg_new.arg)
	{
		if (arg_new.arg[0] == '-')
			j++;
		for (; arg_new.arg[j] != '\0'; j++)
		{
			if (arg_new.arg[j] > 57 || arg_new.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(arg_new.file);
			free(arg_new.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(arg_new.file);
		free(arg_new.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg_new.arg);
	if (arg_new.flag == 0)
		addnode(head, n);
}
