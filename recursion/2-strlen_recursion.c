#include "main.h"


int recursion_aux(char *s)
{

	if (*s == '\0')
		return (0);
	else 
		return 1 + recursion_aux(s + 1);
{

/**
 *_stlen_recursion - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{	

	return recursion_aux(s);
	
}
