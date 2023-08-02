<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> dd643cb367f163ee4c84d5889ec96c5a32fa0701
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point merged
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
