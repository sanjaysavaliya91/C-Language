//find largest value from given 3 values
#include<stdio.h>
void main()
{
int num1,num2,num3;
printf("Enter the value number1 : ");
scanf("%d",&num1);
printf("\nnEnter the value number2 : ");
scanf("%d",&num2);
printf("\nEnter the value number3 : ");
scanf("%d",&num3);

if (num1 && num2 < num3)
{
    printf("Number 3 is bigest then Number-1 and Number-2");
}

if (num1 && num3 < num2)
{
    printf("Number 2 is bigest then Number-1 and Number-3");
}

if (num2 && num3 < num1)
{
    printf("Number 1 is bigest then Number-2 and Number-3");
}




}