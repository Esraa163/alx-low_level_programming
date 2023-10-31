#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min numb of coins
 * @argc: numb of the command lines
 * @argv: string that add on command line
 * Return: 0 if true
*/

int main(int  argc, char *argv[])
{
	if (argc == 2)
	{
		int i, least = 0, m = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cents[i])
			{
				least += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
