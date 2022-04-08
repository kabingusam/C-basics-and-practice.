#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * still working with malloc
 * void *malloc(int num); This function allocates 
 * an array of num bytes and leaves them initialized.
 *  
 */
  int main() 
  { 
      char name[100]; 
      char *description;

      strcpy(name,"kabingu Sammy");
      //allocate dynamic memory
      description = malloc(30 * sizeof(char));
      if ( description == NULL)
      {
          fprintf(stderr,"cant't process null");
      }
      else
      {
          strcpy(description,"currently coding\n");
      }
      printf("Name = %s\n", name);
      printf("Description = %s\n",description);
  }
