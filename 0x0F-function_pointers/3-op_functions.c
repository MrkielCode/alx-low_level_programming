#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - to add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to sub two numbers
 * @a: first number
 * @b: second number
 * Return: sub of a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to mul two numbers
 * @a: first number
 * @b: second number
 * Return: mul of a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to div two numbers
 * @a: first number
 * @b: second number
 * Return: div of a & b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - to mod two numbers
 * @a: first number
 * @b: second number
 * Return: mod of a & b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
