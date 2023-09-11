#include "shell.h"

/**
 * print_env - print current environment.
 * @env: array of strings containing the environment variables.
 *
 */
void print_env(char *env[])
{
	char **current = env;

	while (*current)
	{
		size_t len = _strlen(*current);

		write(STDOUT_FILENO, *current, len);
		write(STDOUT_FILENO, "\n", 1);
		current++;
	}
}
