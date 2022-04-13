#include<stdio.h>
#include<stdlib.h>
/**
 * @continuation of malloc practice
 * @a - integer to be stored
 * @size - size of the array to be stored
 */
 void print_int_array(int a*,int size)
 {
     int i;

     i = 0;
     while(i <size)
     {
         printf("%d\n",a[i]);
         i++;
     }
 }