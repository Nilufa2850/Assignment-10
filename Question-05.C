/*  Write a function to print first N odd natural numbers. (TSRN) */

#include<stdio.h>

void Oddnatural (int);

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        Oddnatural(x);

        return 0;
}

void Oddnatural (int n)
{
        int i ;
        for(i=1 ; i<=n ; i++)
                printf("%d ",2*i-1);
}
