#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - Initialize a variable of type struct dog
  * @d: Pointer to variable of data type struct dog
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Name of the owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
