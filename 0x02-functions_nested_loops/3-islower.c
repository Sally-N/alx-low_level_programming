#include "main.h"

/**
 * _islower - checks for lowercase char
 *
 * Description: returns based on c
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
