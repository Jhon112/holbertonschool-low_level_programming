#include <stdlib.h>
/**
 * print_name - calls a callback fn with the name passed as arg
 * @name: name to be printed
 * @f: callback fn
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
