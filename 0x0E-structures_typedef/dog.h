#ifndef DOG_H
#define DOG_H
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
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
