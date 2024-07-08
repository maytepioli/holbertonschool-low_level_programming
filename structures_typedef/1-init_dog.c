#include "dog.h"
#include <stddef.h>
/**
 *init_dog - inicia una variable
 *@name: nombre
 *@age: edad
 *@owner: dueñ
 *@d: puntero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
