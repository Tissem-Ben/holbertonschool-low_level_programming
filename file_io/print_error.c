#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_error - Prints an error message to STDERR and exits the program.
 * @exit_code: The exit code to return.
 * @msg: The error message format string.
 * @arg: The argument for the format string.
 */
void print_error(int exit_code, const char *msg, int arg)
{
	    dprintf(STDERR_FILENO, msg, arg);
	        exit(exit_code);
}
