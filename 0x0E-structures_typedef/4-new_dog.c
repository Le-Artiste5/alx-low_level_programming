#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog that will be created
 * @name: name of dog
 * @age: The age of the dog
 * @owner: name of the owner
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t a, b, c;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (name == NULL || owner == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	dog->name = malloc(sizeof(char) * a);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	dog->name[c] = name[c];
	dog->age = age;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	dog->owner = malloc(sizeof(char) * b);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
