#include<stdio.h>
/**
 * Main : prints all alphabets except ones specified (b and y)
 * return 0, on successful runs
 */
 int main()
 {
     char c = 'a';

     while( c <= 'z')
     {
         if( c != 'b' && c != 'y')
         {
              putchar(c);
         }
         c++;
     }
     return(0);
     putchar('\n');
 }