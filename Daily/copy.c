#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* Write a function that returns a pointer to a newly 
* allocated space in memory, which contains a copy of the string given as a parameter.
* Prototype: char *_strdup(char *str);
* _strdup() :returns a pointer to a new string which is a duplicate of the string str. 
* Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string.
* It returns NULL if insufficient memory was available 
* @p : newly allocated space in memory.
* @str : the string
 */
 char *_strdup(char *str)
 {
    char *p;
    unsigned int len, j;

    if(str == NULL)
        return(NULL);
    for( len = 0; str[len] = '\0';len++)
        ;
    len++;
    if(len < 0)
        return(NULL);
    p = malloc(len * sizeof(char));
    if(p < 0)
    {
        free(p);
        return(NULL);
    }
    for(j = 0;j < len;j++)
        p[j] = str[j];
    p[j] = '\0';
    return(p);
 }