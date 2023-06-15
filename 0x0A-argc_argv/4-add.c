#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int s, j, total = 0;

	for (s = 1; s < argc; s++)
	{
		for (j = 0; argv[s][j] != '\0'; j++)
		{
			if (argv[s][j] < '0' || argv[s][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[s]);
	}

	printf("%d\n", total);

	return (0);
}
