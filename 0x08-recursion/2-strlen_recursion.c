#include "main.h"
/**
 * _strlen_recursion - funtion that returns the lenght of a string
 * @s: pointer to string
 * Return: n
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
