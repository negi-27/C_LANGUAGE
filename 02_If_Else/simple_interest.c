#include <stdio.h>
int main()
{
    float SI,P,R,T;

    printf("Enter your principal amount = ");
    scanf("%f",&P);
    printf("Enter your rate of interest = ");
    scanf("%f",&R);
    printf("Enter your loan tenure(time period) = ");
    scanf("%f",&T);

    if( P>0 && R>0 && T>0)
    {
       SI = (P*R*T)/100;
        printf("your simple interest is %.2f",SI);
    }
     else
    {
        printf("Invalid Input");
    }
    return 0;
}
