#include "main.h"
/**
<<<<<<< HEAD
 * _memset - fills memory with constant  bytess,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for  (i = 0; i < n; i++)
		*(s + i) = b;
=======
*_memset - The _memset() function fills
* the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
	return (s);
}
