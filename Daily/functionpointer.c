#include<stdio.h>
/**
* function pointers
* a pointer to a function taking no arguments and 
* returning int is int (*)(void).
*/
void Hello()
{
    printf("hello you");
}
int main()
{
    void (*greetP)();
    greetP = Hello;
    greetP();
}