#include "main.h"

/**
 *main - check for alphabet
 *@c: The number to be checked
 *Return: 1 if c is the letter, 0 otherwise
 */

int _isaipha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
