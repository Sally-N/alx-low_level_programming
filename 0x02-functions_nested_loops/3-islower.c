#include "main.h"

/**
 * _islower - checks for lowercase char
 *
 * @c: returns based on int c
 * Return: Success 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
