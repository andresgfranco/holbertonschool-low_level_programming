#include "dog.h"
/**
  * free_dog - frees dogs structure
  * @d: new structure
  * Return: void
**/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
