//  Write a function to calculate simple interest. (TSRS)

#include<stdio.h>

float cal (float,float,float);

int main()
{
        float p , r , t ;
        printf("Enter Principal amount (p),\nRate of Interest (r) and \ntime (t) : ");
        scanf("%f%f%f",&p,&r,&t);

        printf("Simple Interest is : %.2f", cal(p,r,t));
        return 0;

}


float cal (float x,float y,float z)
{
        float SI ;

        return SI = (x*y*z)/100 ;
}

