#include "main.h"
#include<string.h>

/**
 *_strlen -funtion that returns the length of a string.
 *@s: string
 *Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}

