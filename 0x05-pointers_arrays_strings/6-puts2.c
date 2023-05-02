#include "main.h"

/**
 *puts2- function that prints every other character of a string
 *starting with the first character followed by a new line
 *@str: input
 *Return: prints every other character of a string
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *x = str;
	int j;

	while (*x != '\0')
	{
	x++;
	length++;
	}
	i = length - 1;
	for (j = 0 ; j <= i ; j++)
	{
	if (j % 2 == 0)
	{
	_putchar(str[j]);
	}
	}
	_putchar('\n');
}

