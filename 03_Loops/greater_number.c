#include <stdio.h>

int main(){
    int i,n,max;

    printf("Enter your four numbers = ");
    scanf("%d",&max);  

    for(i=1;i<4;i++)
    {
    scanf("%d",&n);
        if(n>max)
        {
            max=n;
        }
    }

    printf("greatest number is %d",max);

    return 0;
}

