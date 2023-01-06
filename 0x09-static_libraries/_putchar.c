#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: the character to print
 *
 * Return: on sucess 1.
=======
 * @c: The character to print
 *
 * Return: On success 1.
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
	return (write(1, &c, 1));
=======
		return (write(1, &c, 1));
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
