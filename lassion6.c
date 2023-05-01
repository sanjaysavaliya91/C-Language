/* The programe of bmi calculator
 bmi= weight/merer*meter
 bmi condition
Below 18.5	Underweight
18.5 – 24.9	Healthy Weight
25.0 – 29.9	Overweight
30.0 and Above	Obesity
*/
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
    if (bmi>=18.5)
    {
        printf("you are Underweight");
    }

    if (bmi > 25)
    {
        printf("you are high weighted");
    }
   
}
