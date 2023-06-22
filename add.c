#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * Return: no return
*/
void f_add(stack_t **head)
{
	stack_t *h;
	int len = 0, op_add;

	h = *head;
	len = op_len(h);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", op_env.lineno);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	op_add = h->n + h->next->n;
	h->next->n = op_add;
	*head = h->next;
	free(h);
}
