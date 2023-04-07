#include "main.h"
/**
 * _sqrt_recursion - a function that returns the square root
 * @n: input
 * @v: int
 * Return: -1 if square root of n doesn't exist else
 *	   return the square root of n
*/
int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - helps to find the square root
 * @n: input to find the square root
 * @v: square root
 * Return: int
*/
int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
