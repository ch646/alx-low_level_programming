#include "main.h"
#include<string.h>

/**
 *_strncpy -function that copies a string
 *@n: input
 *@dest:input
 *@src: input
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[x] = src[x];
	x++;
	}
	while (x < n)
	{
	dest[x] = '\0';
	x++;
	}
	return (dest);
}
