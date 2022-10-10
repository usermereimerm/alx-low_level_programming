#ifndef DOG_H
#define DOG_H

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * struct dog - a structure containing details of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: onwer of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
void print_dog(struct dog *d);

#endif
