#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of 2 num
 * @argc: number of command line input
 * @argv: the string of the command line input
 * Return: 0 if true
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(2);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
