#include "main.h"
#include<string.h>

/**
 *_strcat -function that concatenates two strings.
 *@dest: input
 *@src: input
 *
 *Return: void
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest);
}
