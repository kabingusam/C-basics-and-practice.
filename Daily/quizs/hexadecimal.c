#include<stdio.h>
/**
 * Main : prints hexadecimal numbers.
 * Returns 0 ,on successful run. 
 * 
 */
 int main(void)
 {
     int i = '0';

     while( i <= '9')
     {
         putchar(i);
         i++;
     }
     i = 'a';
     while(i <= 'f')
     {
         putchar(i);
         i++;
     }
     return(0);
 }