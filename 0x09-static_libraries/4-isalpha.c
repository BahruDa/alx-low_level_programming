#include "main.h"
<<<<<<< HEAD

/**
 * _isalpha - A program that Shows 1 if the input is c
 * letter Another cases, shows 0
 *
 * @c: The Charater is ASCII code
 *
 * Return: 1 for for letters. Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
		_putchar('\n');
=======
/**
*_isalpha - controls if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

return (0);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
