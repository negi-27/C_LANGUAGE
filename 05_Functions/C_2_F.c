#include <stdio.h>
float c2f(int c);
float c2f(int c){
    return ((9*c)/5) + 32;
}

int main(){
    int c;

    printf("Enter your Celsius degree = ");
    scanf("%d",&c);

    printf("Your value in Fahrenheit is %.2f",c2f(c));
    return 0;
}