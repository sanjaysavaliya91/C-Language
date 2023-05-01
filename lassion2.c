// The programe of bmi calculator
// bmi= weight/merer*meter

#include <stdio.h>
void main()
{

    float weight, meter, bmi;
    int foot, inch, t_inch;

    printf("Enter your Hight in foot ");
    scanf("%d", &foot);
    printf("Enter your Hight in Inch ");
    scanf("%d", &inch);
    printf("Enter your Weight ");
    scanf("%f", &weight);

    printf("Your Hight in foot is %d", foot);
    printf("\nYour Hight in inch is %d", inch);
    printf("\nYour Weight is %.2f", weight);

    t_inch = foot * 12;
    t_inch = t_inch + inch;
    meter = t_inch / 39.37;

    bmi = weight / (meter * meter);
    printf("\nThe value of your bmi is %.2f\n", bmi);
    if (bmi < 20)
    {
        printf("you are lower weighted");
    }

    if (bmi > 25)
    {
        printf("you are high weighted");
    }
    else
    {
        printf("you are fit and fine ");
    }
    printf("\nEnding.........");

    
}
