#ifndef DOG_H_
#define DOG_H_

/**
  * struct dog - data type to save dogs basic data
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
**/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
