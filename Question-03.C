/*  Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS) */

#include<stdio.h>

int even_odd (int);

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        if( even_odd(x) )
                printf("given number is Even");
        else 
                printf("given number is a odd ");
        return 0;
}

int even_odd (int a)
{
        if (a % 2 == 0)
                return 1 ;
        else 
                return 0 ;
}
