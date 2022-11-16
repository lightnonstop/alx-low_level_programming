#include <stdio.h>
#include "dog.h"
/**
  * print_dog - Prints a struct dog
  * @d: Pointer to variable of type struct dog
  * Description: If an element of d is NULL, it will print (nil)
  * instead of this element. (if name is NULL, it will print Name: (nil))
  * If d is NULL it will print nothing.
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
