#include <stdio.h>

int main(){
    char ch;
    
    printf("Enter your character to get ASCII value = ");
    scanf("%c",&ch);

    printf("The ASCII value for %c is %d ",ch,ch);
    
    /* if(ch >= 97 && ch <= 122) {
            printf("This character is lowercase\n");
        }
        else if(ch >= 65 && ch <= 90) {
            printf("This character is uppercase\n");
        }
        else {
            printf("This character is not a letter\n");
        }
    */

    return 0;
}