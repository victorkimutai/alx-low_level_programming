#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - a variable of type struct dog
 * @d: points to struct dog to initialize
 * @name: name to be initialized
 * @age: age to be initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}

