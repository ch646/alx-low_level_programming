#include<stdlib.h>
#include "main.h"
#include<string.h>

/**
 * string_nconcat-concanates 2 strings in malloc
 * @s1: char input
 * @s2: char input
 * @n:int array
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		a = malloc(sizeof(char) * (length1 + n + 1));
	else
		a = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!a)
		return (NULL);

	while (i < length1)
	{
		a[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length1 + n))
		a[i++] = s2[j++];

	while (n >= length2 && i < (length1 + length2))
		a[i++] = s2[j++];

	a[i] = '\0';

	return (a);
}
