#include <stdio.h>
/**
 * using tenary operator.
 * Tenary opeartor contains 3 arguments;
 * The first is a comparison argument
 * The second is the result upon a true comparison
 * The third is the result upon a false comparison 
 */

 //normal code using if and else 
 int main()
 {
     int i = 10;
     int j = 20;

     if(i > j)
     {
         printf("am greater hahaha!!!");
     }
     else
     {
         printf("not as it seems");
     }
 }
 
 //using the tenary operator
 int main()
 {
     int i = 10;
     int j = 20;

     i > j ? printf("Am greater Hahahah!") : printf("Not as it seems");
 }