#include "main.h"
<<<<<<< HEAD

/**
 * _puts - A function that prints a string folloed by a new line.
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
=======
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
}
