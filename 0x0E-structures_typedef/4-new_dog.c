#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - copies a string pointed by the src and terminates the null byte
 * @dest: the buffer storing the string copy
 * @src: the source string
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog _t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo ->name = malloc(sizeof(char) *(_strlen(name) + 1));
	if (doggo ->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->name = strcopy (doggo->name, name);
	doggo->age  = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);

}
