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
	dog_t *p;
	int i, name_len, owner_len;

	name_len = 0;
	owner_len = 0;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		free(p);
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;
	p->name = malloc(name_len + 1);
	p->owner = malloc(owner_len + 1);
	if (!(p->name) || !(p->owner))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';
	for (i = 0; i < owner_len; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';
	return (p);
}
