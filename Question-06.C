//  Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int fact (int);

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        printf("Factorial of %d is %d",x , fact(x) );

        return 0;
}

int fact (int n)
{
        int i , f = 1 ;
        for(i=1 ; i<=n ; i++)
                f = f * i ;
        return f ;
                
}
