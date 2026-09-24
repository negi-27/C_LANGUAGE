#include<stdio.h>
int main()
{
     int num,rem,rev=0,old;
     printf("Enter your number =");
     scanf("%d",&num);
     old=num;
     while(num!=0)
     {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
     }
     printf("your reversed number is = %d\n",rev);
     if(rev==old)
     {
        printf("%d is a palindrome number\n",old);
     }
     else
     {
        printf("%d is not a palindrome number",old);
     }
     return 0;
}