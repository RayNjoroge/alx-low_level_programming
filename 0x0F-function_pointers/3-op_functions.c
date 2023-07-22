/*include header file(s) containing necessary dependencies*/
#include "3-calc.h"

/**
 * op_add - returns sum of parameters a & b
 * @a: - param 1
 * @b: - param 2
 * Return: - returns sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - returns difference of two params a & b
 * @a: - param 1
 * @b: - param 2
 * Return: returns diff
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}

/**
 * op_mul - returns product of a & b
 * @a: - param 1
 * @b: - param 2
 * Return: returns mult
 */
int op_mul(int a, int b)
{
	int mult = a * b;

	return (mult);
}

/**
 * op_div - finds the result of division of 2 params (a & b)
 * @a: - param 1
 * @b: - param 2
 * Return: returns div
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - finds the modulus of param 1 & 2
 * @a: - param 1
 * @b: - param 2
 * Return: returns mod
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
