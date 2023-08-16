#include "3-calc.h"
int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

/**
 * op_add - returns the sum of two numbers.
 * @c: the first number.
 * @d: the second number.
 * return: the sum of c and d.
 */
int op_add(int c, int d)
{
	return (c + d);
}
/**
 * op_sub - returns the difference of two numbers.
 * @c: the first number.
 * @d: the second number.
 * return: the difference of c and d.
 */
int op_sub(int c, int d)
{
	return (c - d);
}
/**
 * op_mul - return the product of two numbers.
 * @c: the first number.
 * @d: the second number.
 * return: the product of c and d.
 */
int op_sub(int c, int d)
{
	return (c * d);
}
/**
 * op_div - return the division of two numbers.
 * @c: the first number.
 * @d: the second number.
 * return: the division of c and d.
 */
int op_div(int c, int d)
{
	return (c / d);
}
/**
 * op_mod - returns the remainder of division of two numbers.
 * @c: the first number.
 * @d: the second number.
 * return: the remainder of the division of a by c by d.
 */
int op_mod(int c, int d)
{
	return (a % b);
}
