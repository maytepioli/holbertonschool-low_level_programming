#include "function_pointers.h"
/**
 *print_name - que imprime un nombre
 *@name: nombre
 *@f: puntero
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
}
