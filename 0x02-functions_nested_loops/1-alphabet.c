#include "holberton.h"
/**
 * Main: main block
 * Description: Print alphabet in lowercase using only `_putchar`
 * print_alphabet: function to print abcd
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
