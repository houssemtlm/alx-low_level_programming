#include "main.h"
/**
 * _isdigit - checks if c is a digit between 0 and 9
 * @c: number to be checked
 * Return: 1 if digit or 0 for else
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
