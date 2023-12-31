#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
