#include <stdlib.h>
#include "functions_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointers to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
