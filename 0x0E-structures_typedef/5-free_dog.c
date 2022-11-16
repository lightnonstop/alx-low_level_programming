#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_dog - Frees dogs
  * @d: Pointer to variable of type struct dog
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
