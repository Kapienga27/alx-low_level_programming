#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
		_putchar('\n');
	}
}
