#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: print all alphbet but in REV
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
