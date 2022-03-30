#include <stdio.h>
/**
 * recursion basics
 * 
 */
 int fun(int n)
 {
     if(n == 1)
     {
         return 1;
     }
     else
     {
         return 3 + fun(n-1);
     }
 }
 int main()
 {
     int n = 3;
     printf("%d",fun(n));
     return(0);
 }