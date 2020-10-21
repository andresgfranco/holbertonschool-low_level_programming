#include "function_pointers.h"
/**
  * print_name - prints a name
  * @name: string
  * @f: function that prints a name
  * Return: void
**/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
