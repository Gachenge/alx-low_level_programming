#include "main.h"

/**
 * _isalpha - entry
 *
 * @c: input from main
 *
 * Return: zilch
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
