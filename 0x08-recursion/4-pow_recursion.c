#include "main.h"
/**
 * _pow_recursion - returns @x raised to the power of @y
 * @x: first input
 * @y: second input
 * Return: -1 if y is lower than 0 and 1 if y is 0 and x if y is 1 else x to the power of y if
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return(x * _pow_recursion(x, y - 1));
}
