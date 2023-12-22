#include "main.h"
/**
 * _calloc - allocates memory for array
 * @nmemb: array
 * @size: size of array
 * Return: pointer
 */

void *_calloc(size_t nmemb, size_t size)
{
	unsigned int i = 0;
	size_t total_size;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = (nmemb * size);

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		for (; i < total_size; i++)
		{
			ptr[i] = 0;
		}
	}

	return (ptr);
}

