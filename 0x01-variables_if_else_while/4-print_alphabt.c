#include<stdio.h>

/**
 *main-prints all letters in lowercase except q and e.
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
