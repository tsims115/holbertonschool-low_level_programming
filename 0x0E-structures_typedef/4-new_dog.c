#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog_t *cpy;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	cpy = malloc(sizeof(dog_t));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	cpy->name = name;
	cpy->owner = owner;
	return (dog);
}
