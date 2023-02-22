#include "main.h"
/**
 * print_last_digit - function that print last digit of a number
 * @n: number to be printed
 * Return: returns 0
 */
int print_last_digit(int n)
{
	int m  = n % 10;

	if (m < 0)
		m *= -1;
	_putchar(m + '0');
	return (0);
}