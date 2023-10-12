#include"main.h"

/**
 * _isdigit - Check if input is a digit between 0 - 9
 *
 * @c: The character to be checked
 *
 * Return: 1 if is digit, 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
    else
	return (0);
}
