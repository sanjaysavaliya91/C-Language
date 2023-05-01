// *
// *  *
// *    *
// *      *
// *        *
// ***********
#include <stdio.h>
void main()
{
    int space = 0, count = 0, raw;

    printf("Enter the value of raw : ");
    scanf("%d", &raw);
    printf("* ");
    // printf("\n");
    for (count = 0; count < raw; count++)
    {
        printf("\n");
        printf("* ");
        for (space = 0; space < count; space++)
        {
            printf("  ");
        }
        printf("* ");
    }

    raw = raw + 2;
    printf("\n");
    for (count = 0; count < raw; count++)
    {
        printf("* ");
    }
    // printf("* ");
    // printf("\n");
    // printf("* ");
    // for (space = 0; space < 3; space++)
    // {
    //      printf("_ ");
    // }
    // printf("* ");
    // printf("\n");
    // printf("* ");
    // for (space = 0; space < 4; space++)
    // {
    //      printf("_ ");
    // }
    // printf("* ");
}