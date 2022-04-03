#include<stdio.h>
/**
 * Printing alaphabets in small letters and then in capital.
 * Remember to add ++ inodrder to increment and to exit the loop.
 * char - an array of strings.
 * always return 0, on successfully running.
 */
 int main()
 {
     char c = 'a';
     char d = 'A';

     while( c <= 'z')
     {
         putchar(c);
         c++;
     }
     putchar('\n');
     while(d <= 'Z') 
     {
         putchar(d);
         d++;
     }
    return(0);  
 }