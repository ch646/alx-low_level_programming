#include<stdio.h>
#include "main.h"

/**
 * main-Entry point
 *
 * @argc: number of arguments
 * @argv: array of argument entered in command
 *
 * Return: 0 Always success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
