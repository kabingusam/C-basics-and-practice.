#include<stdarg.c>
#include<stdio.h>
/**
 * varidic functions in c
 * given the first parameter specifies how many additional parameters are supplied
 * fnd and return the largest of the remaining parameters
 */
double max(int numArgs, ...);

int main()
{
    double n;
    n = max(4.0, 9.8, 8.9, 4.5, 7.8);
    printf("Max of 4, 90, 89, 45, and 78  is %1f\n");

}

/**
 * the function defination
 * 
 */
double max(int numArgs, ...)
{
    //intialize the argument list
    va_list argList;
    va_start(argList, numArgs);

    double biggest;

    //get the bigggest value from the agrument list 
    //and treat it as a double
    biggest = va_arg(argList, double);

    //get the remaining values from thr argument list
    //treat them also as double
    for(int i = 1; i < numArgs; i++)
    {
        double n = va_arg(argList ,double);
        if (n > biggest)
        {
            n = biggest;
        }
    }
    //dispose the argument list
    va_end(argList);
    //return identified mamximum
    return(biggest);
}