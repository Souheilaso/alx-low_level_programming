#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address 
 * @n: number 
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number 
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	p = atoi(argv[1]);
	if (p < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, p);
	return (0);
}
