#include "dog.h"
/**
  * init_dog - Initialize a variable of type struct dog
  * @d: Pointer to variable of data type struct dog
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
