#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;

	}
	return (i);
}

/**
 * _strcpy - Entry point
 * @dest: pointer
 * @src: pointer string
 *
 * Return: Always dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = _strlen(src);

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Dog or Null
 * Description:  creates a new dog with a copy of name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		return (NULL);

	Dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (Dog->name == NULL)
	{
		free(Dog);
		return (NULL);
	}
	Dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (Dog->owner == NULL)
	{
		free(Dog->name);
		free(Dog);
		return (NULL);
	}
	Dog->name = _strcpy(Dog->name, name);
	Dog->age = age;
	Dog->owner = _strcpy(Dog->owner, owner);
	return (Dog);
}
