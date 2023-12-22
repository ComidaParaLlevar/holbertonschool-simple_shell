#include "main.h"
/**
 * _env - print enviroment
 */
void _env(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}

/**
 * s_env - searches for environment variable
 * @var: variable to find
 * Return: variable
 */
char *s_env(char *var)
{
	int i = 0, c;
	int status;

	while (environ[i])
	{
		status = 1;

		for (c = 0; environ[i][c] != '='; c++)
		{
			if (environ[i][c] != var[c])
				status = 0;
		}
		if (status == 1)
			break;
		i++;
	}
	return (&environ[i][c + 1]);
}
