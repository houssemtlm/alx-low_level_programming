#include "main.h"
/**
 * _strleng - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return:length of the string
*/
int _strlen(char *s)
{
	int count;
	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
