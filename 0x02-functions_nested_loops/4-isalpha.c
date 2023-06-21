#include "main.h"

/**
 * print_alphabet - print alphabet of letters
 *
 * Return: 1 if tur, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
