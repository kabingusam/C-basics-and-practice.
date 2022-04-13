#include<stdio.h>
#include<stdlib.h>
/**
*
*/
struct dog
{
    struct dog *d;
    char *name;
    float age;
    char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    struct dog *d;

    d = malloc(sizeof(struct dog));
    d->name = "Tusker";
    d->age = 1.5;
    d->owner = "sam";
}