#include<stdio.h>
#include<stdlib.h>
/**
 * using malloc : this is a function
 * which dynamically allocates memory
 * free : frees allocated memory
 */
 int main()
 {
     int n;

     printf("Enter size of array\n");
     scanf("%d",&n);
     int *A = (int*)malloc(n*sizeof (int));//dynamically allocated array
     for(int i = 0 ; i < n ;i++)
     {
         A[i] = i+1;
     }
     free(A);
     A = NULL;//after free adjust pointer to null
     for(int i = 0 ;i < n;i++)
     {
         printf("%d",A[i]);
     }
 }