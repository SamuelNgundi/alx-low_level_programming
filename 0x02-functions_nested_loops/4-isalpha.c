#include "main.h"

/**
 * _isalpha - checks for alhabetic character, whether upppercase or lowercase
 * @c: is the letter to be checked
 * Return : 1 if c is a character, o if not
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
