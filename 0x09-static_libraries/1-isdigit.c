#include "main.h"
<<<<<<< HEAD

/**
 * _isdigit - Is a program that checks if a number between 0 to 9
 * @c: input number.
 * Return: 1 if it is a number, 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
/**
*_isdigit - function that verifies if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
