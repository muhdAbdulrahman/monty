#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @number: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int number)
{
	stack_t *h;
	(void)number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
