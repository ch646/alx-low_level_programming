#include<stdio.h>

/**
 *Main -Entry point
 *Description: prints 10 times alphabets in lowercase.
 *
 */
void print_alphabet(void)()
{

    	int i, j;
    	for (i = 0; i < 10; i++) {
        for (j = 0; j < 26; j++)
	{
            _putchar('a' + j);
        }
        _putchar('\n');
    }
}
