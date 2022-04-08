// Write a function that allocates memory using malloc.
// Prototype: void *malloc_checked(unsigned int b);
// Returns a pointer to the allocated memory
// if malloc fails, the malloc_checked function should 
// cause normal process termination with a status value of 98
#include <stdlib.h>
/**
 * @b : size of buffer.
 * Return pointer to buffer.
 */
void *malloc_checked(unsigned int b)
{
        void *p;

        p = malloc(b);
        if(p = NULL)
            exit(98);
        return(p);
}
/**
 * main
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}

