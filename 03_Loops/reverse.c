#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("Enter your number = ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem; // correct formula
        num = num / 10;
    }

    printf("Your reversed number is = %d", rev);
    return 0;
}
