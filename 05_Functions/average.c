#include <stdio.h>

float average(int a,int b,int c);
float average(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a,b,c;
    
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    printf("Enter the third number = ");
    scanf("%d",&c);

    printf("The average of the three number is %.2f",average(a,b,c));
    return 0; 
}

