#include <stdio.h>
#include<stdlib.h>
void main()
{

    int a;
    float b;
    char latter;

    printf("Entar the value a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%f", &b);
    fflush(stdin);
    printf("enter the value of latter ");
    scanf("%c", &latter);

    printf("\nThe value of a is %d ", a);
    printf("\nThe vale of b is %.3f ", b);
    printf("\nThe value of latter is %c", latter);
    
}