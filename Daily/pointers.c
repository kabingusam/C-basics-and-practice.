/**
 * Pointer basics.
 */

//Example 1:

int *p = &i; //declaration
p = &i; //simple assignment

/**
* when declaring a pointer * is not acting as an indirection 
* the symbol tells the complier that p is a ointer to an integer
* when we use say *p = &i the symbol indicates the indirection operator
* and we cannot assign the address to some integer varible
* the address is assigned to a pointer
* just not that * tries to access the address 
*/

//Example 2:
/**
* note the program below prints an erro since the const int i can't be changed
* the *p tries to update the value to 0,but this can't happen.
*/
void fun(const int *p)
{
    *p = 0;
}

int main()
{
    const int i = 10;//the varible is constant,contents can't be changed
    fun(&i);
    return 0;
}

//Example 3:
/**
* Inorder to print address of a varible use %p
*/
int main()
{
    int i = 10;
    int *p = &i;
    printf("the address of the varible i is %p",p);
    return(0);
}
// using the above program we can deduce the aliases of i
// They include *p and *&i
// if the address of i is 1000 and the address of p is 2000
/**
*  for *p:
*  int i =10;
*  int *p = &i;
*  Therefore *p = *(1000) = 10 - tells p to go to the address 1000 and access the contents.
*  for *&i:
*  &i = 1000;
*  *&i = *(&i) = *(1000) = 10 
*/