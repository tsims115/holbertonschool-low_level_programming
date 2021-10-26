#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: dog to free
 *
 *
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d);
}
