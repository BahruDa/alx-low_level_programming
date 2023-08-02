#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _strcpy - A function that copies the string pointed to
 * by src, including the terminating null byte, to the
 * buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
=======
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
