#include "main.h"
/**
 * _isalpha - checks if the character is alphabetic
 * @c: used for input
 * Return: 1 if c is a letter
 * otherwise Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
