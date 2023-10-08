#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch_lowercase = 'a';
	char ch_uppercase = 'A';

	/* Print lowercase alphabets (a - z) */
	while (ch_lowercase <= 'z')
	{
	putchar(ch_lowercase);
	ch_lowercase++;
	}

	/* Print uppercase alphabets (A - Z)*/
	while (ch_uppercase <= 'Z')
	{
	putchar(ch_uppercase);
	ch_uppercase++;
	}

	putchar('\n');
	return (0);
}
