#ifndef DOG_H
#define DOG_H
/**
 *struct dog - definir tipo de estructura
 *@name: nombre
 *@age: edad
 *@owner: dueño
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 *struct dog_t - define tipo de estructura
 *@name: nombre
 *@age: edad
 *@owner: dueño
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
