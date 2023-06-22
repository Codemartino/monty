#include "monty.h"
/**
 * op_len - find length of stack
 * @h: stack
 * Return: length of stack
 */
int op_len(stack *h)
{
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
