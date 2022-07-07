#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: takes in a character
 *
 * Returns: 1 if c is letter, lowercase or uppercase otherwise a
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
