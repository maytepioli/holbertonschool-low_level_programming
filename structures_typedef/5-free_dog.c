#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *free_dog - liberar los perros
 *@d: puntero
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);

	}
}
