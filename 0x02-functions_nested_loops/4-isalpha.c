#include "main.h"

/**
 * _isalpha - check for alphabet char
 *
 * @c: check for letter uppercase or lowercase based on condition
 * Return: success 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
