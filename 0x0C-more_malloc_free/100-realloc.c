#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - rusing malloc and free it allocates a memory block
 * @ptr: pointer to the allocated memory
 * @old_size: ptr allocated memory size
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *ptr1;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);

	ptr1 = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr2[a] = ptr1[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr2[a] = ptr1[a];
	}

	free(ptr);
	return (ptr2);
}
