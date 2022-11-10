#include "shell.h"

/**
 * bfree - frees a pointer and makes the address NULL
 * @ptr: address of the pointer to be freed
 *
 * Return: 1 if successful or 0 otherwise
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
