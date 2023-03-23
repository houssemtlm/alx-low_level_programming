#include "main.h"
/**
 * _islower - checks if the character is in lower case
 *
 * @c: checks for input
 * Return: 1 if c is lower case
 * otherwise Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
