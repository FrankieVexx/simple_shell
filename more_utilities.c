#include "shell.h"

/**
 * _putchar - writes the character to C stdout
 * @c: the character to print
 *
 * Return: on success 1, on error -1 and errno set
 */
it _putchar(char c);
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: the string to print
 *
 * Return: Nothing is returned
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
/**
 * _strncmp - compares at most the first bytes of str1 and str2
 * @s1: the fist string
 * @s2: The second string
 * @len: the limit bytes of comparison
 *
 * Return: int value
 */
int _strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int pos = 0;
	int diff = 0;

	while (pos < len)
	{
		if (s1[pos] == s2[pos])
		{
			pos++;
			continue;
		}
		else
		{
			diff = s1[pos] - s2[pos];
			break;
		}

		pos++;
	}

	return (diff);
}

/**
 * _realloc - resize the ptr that was previously allocated
 * @ptr: the previously allocated
 * @old_size: the old size of the pointer
 * @new_size: the new size of the pointer
 *
 * Return: a new pointer to the memry block allocated
 * with new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
