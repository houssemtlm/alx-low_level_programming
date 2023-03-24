#include "main.h"
/**
 * _isupper - checks if letter is upper case
 * @x: number to be checked
 * Return: 1 for upper case or 0 for else
*/
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
