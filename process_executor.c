#include "shell.h"

/**
 * execute_command - executes command.
 *
 * @args: an array of strings representing the command and it is argument.
 *
 * @env: an array of strings representing the environment variables.
 *
 */

void execute_command(char **args, char *env[])
{
	if (_strcmp(args[0], "env") == 0)
	{
		print_env(env);
	}
	else
	{
		 pid_t pid = fork();

		 if (pid < 0)
		 {
			 perror("fork failed");
			 exit(1);
		 }
		 else if (pid == 0)
		 {
			 if (execvp(args[0], args) == -1)
			 {
				  perror("error executing command");
				   exit(1);
			 }
			 else
			 {
				 waitpid(pid, NULL, 0);
				 free(args);
			 }
		 }
	}
}
