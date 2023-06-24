/*Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN) */

#include<stdio.h>

void prime(int);

int main ()
{
        int a ;
        printf("Enter a number : ");
        scanf("%d",&a);

        prime(a);
}

void prime ( int x )
{
        int i ;

        for(i=2 ; x>1 ; i++)
        {
                while(x % i == 0)
                {
                        printf("%d, ",i);
                        x = x/i ;
                }
        }
}

