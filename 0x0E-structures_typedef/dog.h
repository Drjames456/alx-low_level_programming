#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a structured data for a dog
 * @name: a pointer to a dog's name
 * @age: dog's age
 * @owner: a pointer to dog's owner
 *
 *
 *
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
