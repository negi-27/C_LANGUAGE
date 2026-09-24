#include <stdio.h>

float force_A(float m);
float force_A(float m){
    return m*9.8;
}

int main(){
    float m;
    
    printf("Enter your mass(weight) = ");
    scanf("%f",&m);

    printf("Force acting on body is %.2f",force_A(m));
    return 0;
}