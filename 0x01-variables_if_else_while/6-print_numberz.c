#include<stdio.h>

/**
 *main- prints all single digit numbers of
 *	base 10 starting from 0, followed by a new line
 *
 *Return:Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
