#ifndef DOG_H
#define DOG_H
/**
 *struct dog - definir tipo de estructura
 *@name: nombre
 *@age: edad
 *@owner: due�o
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
