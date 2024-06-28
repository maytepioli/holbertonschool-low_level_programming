#include "main.h"

/**
 *aux_prime_number - auxiliar numero primo
 *@x: divisor
 *@n: numero
 * Return: Always 0.
 */
int aux_prime_number(int n, int x)
{
	if (n <= 1)
		return (0);
	else if (x * x > n)
		return (1);
	else if (n % x == 0)
		return (0);
	return (aux_prime_number(n, x + 1));

}
/**
 *is_prime_number - recursion para numero primo
 *@n: numero
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int x = 2;

	return (aux_prime_number(n, x));

}
