#include <stdio.h>

int main(){
    int num,i;

    printf("Enter the number = ");
    scanf("%d",&num);

    if( num==0 || num==1)
    {
        printf("%d is not prime",num);
        return 0;
    }

    if(num==2)
    {
        printf("%d is prime",num);
        return 0;
    }

    for(i=2;i<num;i++) 
    {
        if(num%i==0)
        break;
    }

    if(i==num) 
    {
        printf("The number %d is prime\n",num);
    }    
    else 
    {
        printf("The number %d is not prime\n",num);
    }

    return 0;
}