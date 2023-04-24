#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 *
 * main - Determines if the last digit is greater than 5,less than or 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (Last digit of n >0 )
	{
		printf("%s and is greater than 5\n", n);
	}
	else if (Last digit of n == 0)
	{
		printf("%s and is 0\n", n)
	}
	else
	{
		printf("%s and is less than 6 and not 0\n", n)
	return (0);
}
