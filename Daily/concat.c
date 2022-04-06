#include<stdio.h>
#include "main.h"

/**
*Write a function that concatenates two strings.
*Prototype: char *str_concat(char *s1, char *s2);
*The returned pointer should point to a newly allocated space in 
*memory which contains the contents of s1,
*followed by the contents of s2, and null terminated•if NULL is passed,
*treat it as an empty string
*The function should return NULL on failure
*@s1 : first string
*@s2 : second string
*str_concat : concatenates both string 1 and string 2
 */

char *str_concat(char *s1, char *s2)
{
    char *p;

    p = malloc(s1 * sizeof(char));
    return(p);
    if(p == NULL)
        return(0);
    else
        return(p)
    p = malloc(s2 * sizeof(char));
    return(p);
    if(p == NULL)
        return(0)
    else
        return(p);
}