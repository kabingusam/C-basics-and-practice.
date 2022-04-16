#include <stdio.h>
/**
* pointer functions
* function returning pointer to int --
* int *func(int a, float b);
* pointer to function returning int --
* int (*func)(int a, float b);
*/

int Add(int a,int b)
{
    return(a + b);
}
int main()
{
    int sum;
    int (*addPtr)(int,int);
    addPtr = &Add;

    sum = (*addPtr)(2,5);//dereferencing and executing the function
    printf("%d\n", sum);
}