#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - Creates a new dog
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Name of the owner of the dog
  * Return: New dog data
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new;
	dog_t *ptr = &new;

	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
