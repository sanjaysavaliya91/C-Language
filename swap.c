// The progame of swap
#include<stdio.h>
void main()
{

int a, b;
printf("enter the value a ");
scanf("%d",&a);
printf("enter the value b ");
scanf("%d",&b);
printf("The value a = %d and b = %d",a,b);

a= a+b; //30
b=a-b;  //10
a=a-b; //20
 printf("\nSwap the vale a = %d and b = %d",a,b);


}