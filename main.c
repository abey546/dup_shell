#include "shell.h"

/**
 * main - Entry point of the program.
 *
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * @env: Array of environment variables.
 *
 * Return: 0 on succesful program execution.
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[], char *env[])
{
	handle_input(env);
	print_env(env);
	return (0);
}
