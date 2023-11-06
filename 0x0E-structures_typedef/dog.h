#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>
/**
  * struct dog - defines a new type of struct dog
  * @name: input
  * @age: input
  * @owner: input
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  * dog_t - struct dog
  */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
