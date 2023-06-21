#include "monty.h"

/**
 * op_swap - Swap the top two elements on the stack
 * @sp: Stack pointer
 * exchange the top tow elements on stack
 */
void op_swap(stack_t **sp)
{
	stack_t *p = *sp;

	if (!(p && p != p->next))
		pfailure("L%u: can't swap, stack too short\n", op_env.lineno);

	p->n ^= p->prev->n;
	p->prev->n ^= p->n;
	p->n ^= p->prev->n;
}
