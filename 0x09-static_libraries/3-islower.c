#include "main.h"
/**
<<<<<<< HEAD
 * _islower - A program that would Show 1 if the inputs
 * is a lowercase character. Another case, show 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
=======
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
