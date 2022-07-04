#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLength, ownerLength, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nameLength = 0; name[nameLength]; nameLength++)
		;
	nameLength++;
	dog->name = malloc(nameLength * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nameLength; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ownerLength = 0; owner[ownerLength]; ownerLength++)
		;
	ownerLength++;
	dog->owner = malloc(ownerLength * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerLength; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
