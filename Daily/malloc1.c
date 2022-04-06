#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * Write a function that creates an array of chars, and initializes 
 * it with a specific char.(*create_array-creates the array)
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * @size : size of the array
 * @c :  character to be intiliaized
 * malloc : this is a function which dynamically allocates memory
 * *p :pointer
 */

char *create_array(unsigned int size,char c);
{
    char *p;
    unsigned int i;

    if(size > 0)
    {
        p = malloc(size * sizeof(char));
        if (p == NULL)
            return(NULL);
    }
    else
    {
        return(NULL);
        for(i = 0;i < size;i++)
           p[i] = c;
        return(p);
    }
}