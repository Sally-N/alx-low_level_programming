#include "main.h"

/**
 * main - prints _ putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_puctchar(a[c]);
	}

	_putchar('\n');
	return (0);

}



