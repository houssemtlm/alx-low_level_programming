#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c;
	int C;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (C = 'A'; C <= 'Z'; ++C)
		putchar(C);
	putchar('\n');
	return (0);
}
