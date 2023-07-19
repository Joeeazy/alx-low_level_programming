#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * op_add - function that finds the sum of two numbers.
 * @a: The 1st num
 * @b: The 2nd num
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that finds the difference of two numbers.
 * @a: The 1st num.
 * @b: The 2nd Num.
 * Return: The difference btn a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two numbers.
 * @a: The 1st Num
 * @b: The 2nd Num
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers.
 * @a: The 1st Num
 * @b: The 2nd Num
 * Return: The division of a and b.
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
 * op_mod - functuion that finds the remainder after division
 * @a: The 1st Num
 * @b: The 2nd Num
 *Return: The modulus
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

