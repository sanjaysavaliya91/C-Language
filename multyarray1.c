// Write a programe to accept 5 subject for 5 student using multiarray amd find sum and average
#include <stdio.h>
void main()
{
    int student[5][5], count = 0, temp = 0, sum[5];
    float average;
    for (temp = 0; temp < 5; temp++)
    {
        printf("\nSudent %d mark  ", (temp + 1));
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter the Subject %d mark = ", count + 1);
            scanf("%d", &student[temp][count]);
        }
    }
    for (temp = 0; temp < 5; temp++)
    {
        printf("\nStudent %d mark  ", temp + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nSubject %d  = %d", temp, (student[temp][count]));
        }
    }
    // sum[0]=student[0][0] + student[0][1];
    for (temp = 0; temp < 5; temp++)
    {
        sum[temp] = 0;
        for (count = 0; count < 5; count++)
        {
            sum[temp] = sum[temp] + student[temp][count];
        }
        printf("\nStudent %d Sum is = %d", temp + 1, sum[temp]);
    }
    printf("\nAverage of 5 Student's 5 Subject Marks");

    for (temp = 0; temp < 5; temp++)
    {
        average = average + sum[temp];
    }
    average = average/5;
    printf("\nAverage of 5 student's marks is %.2f ",average);
}