#include "main.h"

/**
 * add - add two numbers.
 * sub - subtract two numbers.
 * mul - multiply two numbers.
 * div - divide two numbers.
 * mod - modulus of two numbers
 *
 * @a: first number
 * @b: second number
 * Return: Always 0.
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

int sub(int a, int b)
{
        int result;

        result = a - b;
        return (result);
}

int mul(int a, int b)
{
        int result;

        result = a * b;
        return (result);
}

int div(int a, int b)
{
        int result;

        result = a / b;
        return (result);
}

int mod(int a, int b)
{
        int result;

        result = a % b;
        return (result);
}
