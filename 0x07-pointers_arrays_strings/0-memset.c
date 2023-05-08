#include "main.h"
#include<string.h>

/**
 *_memset- function that fills memory with a constant byte
 *
 *@n: number of bytes to be filled
 *@s: starting address of memory to be filled
 *@b: value to be filled
 *Return: s
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
