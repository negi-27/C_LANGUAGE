#include <stdio.h>

int main(){
    int age;

    printf("Enter the age = ");
    scanf("%d",&age);

    if(age>60){
    printf("You can drive and you are a senior citizen\n");
    }
    else if(age>40 && age<=60){
        printf("You can drive and you are elder\n");
    } 
    else if(age>18 && age<=40){
        printf("You can drive\n");
    }
    else if(age<18){
        printf("You cannot drive\n");
    }
    if(age < 0){
        printf("Invalid age\n");
    }

    return 0;
}