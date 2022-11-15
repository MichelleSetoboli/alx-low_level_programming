#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int ln = 0, lo = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[ln])
		ln++;
	while (owner[lo])
		lo++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpyname = malloc(ln + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(lo + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;

	return (new_dog);
}










