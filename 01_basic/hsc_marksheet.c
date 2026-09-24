#include <stdio.h>

int main(void) {
    float english, hindi, maths, physics, chemistry, biology, \
    total, percentage, average;

    printf("Enter your English marks: ");
    scanf("%f", &english);

    printf("Enter your Hindi marks: ");
    scanf("%f", &hindi);

    printf("Enter your Maths marks: ");
    scanf("%f", &maths);

    printf("Enter your Physics marks: ");
    scanf("%f", &physics);

    printf("Enter your Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter your Biology marks: ");
    scanf("%f", &biology);

    total = english + hindi + maths + physics + chemistry + biology;
    percentage = (total / 600) * 100;
    average = total / 6;

    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Average marks: %.2f\n", average);

    if(percentage >= 35 && english >= 35 && hindi >= 35 &&
       maths >= 35 && physics >= 35 && chemistry >= 35 &&
       biology >= 35)
    {
        printf("You have passed. No Back.\n");
    }
    else
    {
        printf("You have failed due to low marks in one or more subjects.\n");
    }

    return 0;
}
