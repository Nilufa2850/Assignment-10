/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int fact(int);
int comb (int , int);

int fact (int n)
{
        int i , f ;
        for (i=1 , f=1 ; i<=n ; i++)
                f = f * i ;
        return f;
}

int comb (int n , int r)
{
        int c ;
        c = fact(n) / ( fact(r) * fact(n-r));
        return c ;
}

int main ()
{
        int x , y ,z ;
        printf("enter value of x & y :");
        scanf("%d%d",&x,&y);

        z = comb(x,y);
        printf("Combination is %d",z);
        return 0;

}

