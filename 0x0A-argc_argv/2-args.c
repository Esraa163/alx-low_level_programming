#include <stdio.h>

/**
 * main - the function that will prent the input
 * @argc: the input thatthe main is taken
 * @argv: the string that will taken by the main
 * Return: 0 if true
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
