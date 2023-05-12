#include<stdio.h>
#include "main.h"

/**
 *main- Entry point
 *@argc: input arguments
 *@argv: input argc array
 *Return: 0 Always a success
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
