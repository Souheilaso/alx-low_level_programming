#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - a function that adds to numbers
  * @a: number 1
  * @b: number 2
  *
  * Return: result of function
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - a function that subtracts from numbers
  * @a: number 1
  * @b: number 2
  *
  * Return:  result of function
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - a function that multiplies
  * @a: number 1
  * @b: number 2
  *
  * Return: result of function
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a function that divides
  * @a: number 1
  * @b: number 2
  *
  * Return: result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - a function that calculates modulus
  * @a: number 1
  * @b: number 2
  *
  * Return: result
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
