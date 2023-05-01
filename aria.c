// aria of cylinder
#include<stdio.h>
void main()
{
   // a=2*pi/*r*h + 2*pi*r*r
   // aria= (2*pi*r*h)+ (2*pi*r*r);
    float pi=3.141592,r,h, aria;
    
    printf("Enter value r is ");
    scanf("%f",&r);
    printf("Enter value h is ");
    scanf("%f",&h);
    
    aria=(2*pi*r*h)+ (2*pi*(r*r));
    printf("The value of cylinder aria is %.3f",aria);
}