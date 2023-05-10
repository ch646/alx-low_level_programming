#include "main.h"

/**
 * _print_rev_recursion- reverse a string
 *
 *@s: input value
 *Return: 0 Always success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar (*s);
	}
}
