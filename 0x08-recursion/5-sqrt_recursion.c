#include "main.h"

/**
 * find_sqrt - finds the natural square root of a number
 * @num: the number to find square root of
 * @root: the root to be tested
 * Return: the square root if the number has a natural square
 * otherwise -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - retrns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root if its natural square root exists
 * otherwise -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
