#include "monty.h"

/**
 * op_pop - Remove the element at the top of the stack
 * @sp: stack pointer
 * This removes elements at the top
 * of the stack
 */
void op_pop(stack_t **sp)
{
	stack_t *top = NULL;

	if (!*sp)
		pfailure("L%u: can't pop an empty stack\n", op_env.lineno);

	if (*sp != (*sp)->prev)
	{
		top = (*sp)->prev;
		(*sp)->next->prev = top;
		top->next = (*sp)->next;
	}
	free(*sp);
	*sp = top;
}

