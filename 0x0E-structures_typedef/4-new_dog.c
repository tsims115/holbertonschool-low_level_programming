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
	unsigned int i;
	dog_t *dog;
	char *pname, *powner;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (dog);
	}
	pname = malloc(sizeof(char) * strlen(name) + 1);
	if (!pname)
		return (NULL);
	powner =  malloc(sizeof(char) * strlen(owner) + 1);
	if (!powner)
		return (NULL);
	for (i = 0; i <= strlen(name); i++)
		pname[i] = name[i];
	for (i = 0; i <= strlen(owner); i++)
		powner[i] = owner[i];
	dog->name = pname;
	if (!dog->name)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = powner;
	if (!dog->owner)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
