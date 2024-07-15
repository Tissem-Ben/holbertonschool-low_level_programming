#include "function_pointers.h"

/**
 * print_name - print a name whith a function.
 * @*name: The name to be printed.
 * @*f: Pointer to the function used to print the name.
 * 
 * Reuturn: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
