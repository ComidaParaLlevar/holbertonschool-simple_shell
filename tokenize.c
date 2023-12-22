#include "main.h"
/**
 * _token - split string
 * @str: string
 * @sep: separator
 * Return: divided path
 */

char **_token(char *str, char *sep)
{
	char *aux, **token_str;
	int i = 0;

	aux = strtok(str, sep);
	token_str = (char **)_calloc(100, sizeof(char *));

	if (!token_str)
	{
		free(token_str);
		return (NULL);
	}

	while (aux)
	{
		token_str[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (token_str);
}

