// The programe is full pyramid with midle space
#include <stdio.h>
void main()
{

    int space, count, temp, line = 6;

    /*for (space = 0; space < 5; space++)
    {
        printf("_ ");
    }
   // printf("* ");
   */
    for (count = 0; count <= line; count++)
    {

        for (space = line; space > count; space--)
        {
            printf("  "); // remove _
        }
        for (temp = 0; temp < count; temp++)
        {
            printf("* ");
            printf("  "); // remove _
        }
        printf("\n");
    }
    /*printf("* ");
      printf("_ ");
      printf("* ");
      // printf("\n");
      // for (space = 0; space < 3; space++)
      //{
      //     printf("_ ");
      // }
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("_ ");
      printf("* ");
      // printf("\n");
      // for (space = 0; space < 2; space++)
      //{
      //     printf("_ ");
      // }
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("_ ");
      printf("* ");
      // printf("\n");
      // for (space = 0; space < 1; space++)
      //{
      //     printf("_ ");
      // }
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("_ ");
      printf("* ");
      printf("\n");

      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      // printf("_ ");
      */
}