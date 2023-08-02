#include "main.h"
<<<<<<< HEAD

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 in the other case.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
{
		return (0);
	}
=======
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
