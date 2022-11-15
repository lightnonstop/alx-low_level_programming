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
/* FUNCTION PROTOTYPES*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
