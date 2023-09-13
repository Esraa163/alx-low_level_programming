#include "main.h"

/**
 * main - Entry point
 *
 * Descreption: A C program that prints message
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(a[ch]);
	}
	_putchar ("\n");

	return (0);
}
