#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - prints all members of the dog struct
 * @d: struct to print
 *
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
