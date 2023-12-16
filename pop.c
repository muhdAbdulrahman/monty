#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @number: line_number
 * Return: no return
*/
void pop(stack_t **head, unsigned int number)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
