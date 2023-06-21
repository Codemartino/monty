#include "monty.h"
#include <stdarg.h>

/**
 * pfailure - Print an error message and exit
 * @fmt: Format string
 * @...: Format string parameters
 * this prints code failures
 * Description: Print a message on stderr and exit with status EXIT_FAILURE.
 */
void pfailure(const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);

	vfprintf(stderr, fmt, args);

	va_end(args);

	exit(EXIT_FAILURE);
}
