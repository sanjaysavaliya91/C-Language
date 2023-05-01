// write a program to find sum and average for 1 player for 5 matches
#include <stdio.h>
void main()
{
    int run[5], count = 0, sum = 0 ,temp=0;
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

for (temp=0; temp<6; temp++)
{
    
 for (count=0;count <5; count++)

   {

       if (run[0] == 0 && run[1] == 0 && run[2] == 0 && run[3] == 0 && run[4] == 0)
       {
        break;
       }

     else if (run[count] >= run[0] && run[count] >= run[1] && run[count] >= run[2] && run[count] >= run[3] && run[count] >= run[4])
           {
               printf("\n%d", run[count]);
               run[count] = 0;
           }
       }
}
}