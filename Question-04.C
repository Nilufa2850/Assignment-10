/*  Write a function to print first N natural numbers (TSRN) */

#include<stdio.h>

void natural (int);

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        natural(x);
        
        return 0;
}

void natural (int n)
{
        int i ;
        for(i=1 ; i<=n ; i++)
                printf("%d ",i);
}
