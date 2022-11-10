#include "shell.h"

/**
 * frees_get_env - ...
 * @env_path: The environment variabe frees
 *
 * Return: Nothing returns
 */
void frees_get_env(char *env_path)
{
	int i;

	for (i = 4; i >= 0; i--)
		env_path--;

	free(env_path);
}

/**
 * frees_tokens _ ..
 * @tokns: ...
 *
 * Return: Nothing returns
 */
void free_tokens(char **tokns)
{
	char **temp = tokns;

	if (tkns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}
