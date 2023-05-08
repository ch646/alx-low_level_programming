#include "main.h"


/**
 *_memset- function that fills memory with a constant byte
 *
 *@n: number of bytes to be filled
 *@s: starting address of memory to be filled
 *@b: value to be filled
 *Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n-- > 0)
	{
		s[i] = b;
	}
	return (s);
}
