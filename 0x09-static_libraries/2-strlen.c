#include "main.h"
<<<<<<< HEAD

/**
 * _strlen - A function that returns the length of a string
 *@s: string
 * Return: always 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
=======
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
