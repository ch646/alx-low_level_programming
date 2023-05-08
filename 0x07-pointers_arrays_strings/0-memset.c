#include "main.h"
#include<string.h>

/**
 *_memset()- function that fills memory with a constant byte
 *
 *@n:input
 *@s: pointer
 *@b: constant byte
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
