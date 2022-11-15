#ifndef DOG_H
#define DOG_H
/**
  * struct dog - Dog properties
  * @name: First member
  * @age: Second member
  * @owner: Third member
  */
typedef struct dog
{
	char  *name;
	float age;
	char *owner;
} dog_h;
void _putchar(char n);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
