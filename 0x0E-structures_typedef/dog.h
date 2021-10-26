#ifndef DOG_H
#define DOG_H

/**
 * struct dog - makes a dog data type
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
