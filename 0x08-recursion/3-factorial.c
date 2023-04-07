#include "main.h"
/**
 * factorial - returns a factorial of a given number
 * @n: input number
 * Return: -1 if n is lower than 0 and 1 if n is 0 else the factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
