#include "print_error.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_error - Prints an error message and exits.
 * @exit_code: Exit code to return.
 * @msg: Format string for the error message.
 * @arg: Argument to format in the message.
 */
void print_error(int exit_code, const char *msg, const char *arg)
{

	dprintf(STDERR_FILENO, msg, arg);

	exit(exit_code);
}
