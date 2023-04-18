#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: member1
 * @age: member2
 * @owner: member3
 *
 * Return: pointer a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int a, b, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = maloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
