#include <main.h>

/**
 * print_sign - prints sign of a number
 *
 * @n: prints based on conditions
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
