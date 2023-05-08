#include "main.h"

	/**
	*_memcpy- a function that copies memory area.
	*
	*@n: number of bytes to be copied
	*
	*@dest:destination array where content copied
	*@src: source of data to be copied
	*Return: copied array char
	*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int a = n;

	while (i < a && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < a)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

