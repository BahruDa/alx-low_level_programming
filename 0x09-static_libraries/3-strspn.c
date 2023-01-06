#include "main.h"
/**
<<<<<<< HEAD
 * _strspn - A program that gets the length of a prefix substring
 * @s: initial segment.
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
																	{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
=======
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
