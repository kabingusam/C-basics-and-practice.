#include <stdio.h>
/**
 * @brief 
 * 
 * @param argc : refers to the number of arguments passed
 * @param argv : a pointer array which points to each argument passed to the program
 */


argc , and argv[] is 



 int main( int argc, char *argv[] )
{ 
        printf("Program name %s\n", argv[0]);
        
        if( argc == 2 ) 
{
        printf("The argument supplied is %s\n", argv[1]);
    
}
    else if
        ( argc > 2 ) 
{ 
        printf("Too many arguments supplied.\n"); 
} 
    else 
{ 
        printf("One argument expected.\n"); 
} 

}
