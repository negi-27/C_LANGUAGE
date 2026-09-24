#include <stdio.h>
int main()
{
    int num,old,rem,result=0;
    printf("Enter your number =");
    scanf("%d",&num);
    old=num;
    while(num!=0)
    {
        rem=num%10;
        result+=rem*rem*rem;
        num=num/10;
    }
   if(result==old)
   {
    printf("%d is armstrong number",old);
   }
   else
   {
    printf("%d is not armstrong number",old);
   }
}