/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - main fn
 * @a: - num 1
 * @b: - num 2
 *
 * Return: - return sum of the 2 params
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - main fn
 * @a: - num 1
 * @b: - num 2
 *
 * Return: - return difference of param 1 & 2
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}

/**
 * op_mul - main fn
 * @a: - num 1
 * @b: - num 2
 *
 * Return: - return the product of param 1 & 2
 */
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * op_div - main fn
 * @a: - num 1
 * @b: - num 2
 *
 * Return: - returns division of param 1 & 2
 */
int op_div(int a, int b)
{
	int division = a / b;

	return (division);
}

/**
 * op_mod - main fn
 * @a: - num 1
 * @b: - num 2
 *
 * Return: - return modulus of param 1 & 2
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
