/*Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int fact(int);
int arrang (int , int);

int main ()
{
        int x , y ;
        printf("enter value of x & y :");
        scanf("%d%d",&x,&y);

        printf("Permurtation is %d", arrang(x,y) );
        return 0;

}

int arrang (int n , int r)
{
        int p ;
        p = fact(n) / fact(n-r);
        return p ;
}

int fact (int n)
{
        int i , f ;
        for (i=1 , f=1 ; i<=n ; i++)
                f = f * i ;
        return f;
}



