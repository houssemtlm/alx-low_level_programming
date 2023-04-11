#include "main.h"
/**
 * _abs - return the absolute value of n
 * @n: checks input
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
