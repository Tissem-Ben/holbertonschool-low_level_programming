#include "function_pointers.h"

/**
 * print_name - print a name using a given function.
 * @name: The name to be printed.
 * @f: Pointer to the function used to print the name.
 *
 * Return: Nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
