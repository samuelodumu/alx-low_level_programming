#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees struct dog
 *
 * @dog_t: struct dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
