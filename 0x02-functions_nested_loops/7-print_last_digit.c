#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: checks for input
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = (-1) * (n % 10);
	else
		d = n % 10;
	_putchar(d + '0');
	return (d);
}
