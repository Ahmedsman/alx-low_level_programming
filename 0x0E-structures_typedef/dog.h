#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type of a poppy structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a dog, his name, age and his owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
