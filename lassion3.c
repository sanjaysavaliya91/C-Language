#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, h;
    float pi=3.14159,result;
    char alpha;

    printf("Enter the value of r ");
    scanf("%d", &r);
    printf("Enter the value of h ");
    scanf("%d", &h);
    fflush(stdin);
    printf("Enter the value of c or t \n c= aria of circle \n t= aria of circle ");
    scanf("%c", &alpha);
    if (alpha == 'c')
    {

        result = 2*pi*r*h+2*pi*(r*r);//2*pi*r*h+2*pi*r*h
        printf("Value cyilinder Aria = %.2f", result);
    }
    if(alpha=='t') //circle aria =pi*r*r
    {
        result=pi*(r*r);
        printf("Value of Circle Aria = %.2f ",result);
    }
    else
    {
        printf("Wrong input");
    }
    printf("\ngood bye..........");
}