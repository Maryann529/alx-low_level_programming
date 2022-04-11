#ifndef DOG_H
#define DOG_H

/**
 * struct - a dog's basic info
 * @name: First memeber
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
