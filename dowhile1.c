// Write a programe to print factorial of given number
// 5 = 5 * 4 * 3 * 2 * 1
#include <stdio.h>
void main()
{
    {
    }
    int number = 0, answer = 0, temp = 0;
    printf("Enter your number ");
    scanf("%d", &number);
    answer = number;
    temp = number - 1; // 4
    if (number > 0)
    {
        if (number == 1)
        {
            printf("The answer is 1");
        }
        else
        {
            do
            {
                answer = answer * temp; // 20
                temp = temp - 1;
            } while (temp >= 1);
            printf("The answer is %d ", answer);
        }
    }
    else
    {
        printf("Please enter valid input(Input > 0)");
    }

    // 3
    // answer = answer * temp; // 60
    // temp = temp - 1;      // 2
    // answer = answer * temp; // 120
    // temp = temp - 1; // 1
    // answer = answer * temp;
}