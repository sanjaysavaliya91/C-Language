// write a program to find sum and average for 1 player for 5 matches
#include <stdio.h>
void main()
{
    int run[5], count = 0, sum = 0;
    float average;
    for (count = 0; count < 5; count++)
    {
        printf("This players match %d run is ", count + 1);
        scanf("%d", &run[count]);
    }
    for (count = 0; count < 5; count++)
    {
        printf("\nMatch %d run is %d ", count + 1, run[count]);
    }

    for (count = 0; count < 5; count++)
    {
        sum = sum + run[count];
    }
    printf("\nThe value of runs sum is %d", sum);

    average = sum / 5;
    printf("\nThe player runs average is %.2f", average);

    // sum = sum + run[1];
    // sum = sum + run[2];
    // sum = sum + run[3];
    // sum = sum + run[4];
}