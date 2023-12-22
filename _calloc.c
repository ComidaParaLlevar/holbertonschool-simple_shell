#include "main.h"
/**
 * _calloc - allocates memory for array
 * @nmemb: array
 * @size: size of array
 * Return: pointer
 */

void *_calloc(size_t nmemb, size_t size)
{
	size_t i = 0;
	size_t total_size;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	total_size = nmemb * size;

	if (total_size / nmemb != size)
	{
		return NULL;
	}

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		for (i = 0; i < total_size; i++)
		{
			*((char *)ptr + i) = 0;
		}
	}

	return (ptr);
}

