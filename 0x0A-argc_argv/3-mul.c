#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;
	int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	total = arg1 * arg2;

	printf("%d\n", total);
	return (0);
}
