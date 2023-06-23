//  Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area (float);

int main()
{
        float x , y ;
        printf("Enter values of radius : ");
        scanf("%f",&x);

        y = area(x);
        printf("Area of this cicle is : %.2f",y);

        return 0;
}

float area (float R)
{
        float A ;
        A = 3.14 * R * R ;

        return A;
}
