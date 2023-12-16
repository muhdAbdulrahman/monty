#include "monty.h"
/**
 * pstr - prints string from top
 * @head: head
 * @number: number
 * Return: no return
*/
void pstr(stack_t **head, unsigned int number)
{
	stack_t *h;
	(void)number;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
