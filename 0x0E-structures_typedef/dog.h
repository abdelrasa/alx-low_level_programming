#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct name
 * @name: member_1
 * @age: member_2
 * @owner: member_3
 *
 * Description: struct name about dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif