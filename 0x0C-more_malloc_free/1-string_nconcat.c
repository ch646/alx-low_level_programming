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
	unsigned int str1, str2, j, i = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	
	if (n < str2)
		a = malloc(sizeof(char) * (str1 + n + 1));
	else
		a = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!a)
		return (NULL);
	while (j < str1)
	{
		a[j] = s1[j];
		j++;
	}
	while (n < str2 && j < (str1 + n))
		a[j++] = s2[i++];
	while (n >= str2 && j < (str1 + str2))
		a[j++] = s2[i++];

	a[j] = '\0';
	{

	return (a);
	}
}
