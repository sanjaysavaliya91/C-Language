// write a programe to print half pyramid top to bottom
#include <stdio.h>
void main()
{

    int count = 0, flash = 0, size = 0;

    //printf("enter value of size for triangle ");
    // scanf("%d", &size);

    while (count < 6)

    {
        printf("\n");
        count = 6;
        while (count <= flash)
        {
            printf("*");
            count = count - 1;
        }
        flash = flash - 1;
    }
    /* printf("*");
     printf("*");
     printf("*");
     printf("*");
     printf("*");

    printf("\n");
     printf("*");
     printf("*");
     printf("*");
     printf("*");

     printf("\n");
     printf("*");
     printf("*");
     printf("*");

     printf("\n");
     printf("*");
     printf("*");

     printf("\n");
     printf("*");
     */
}