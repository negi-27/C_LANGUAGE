#include <stdio.h>

int main(){
    float a,b;
    char msg[50];

    printf("Enter first number = ");
    scanf("%f",&a);
    printf("Enter second number = ");
    scanf("%f",&b);
    
    printf("%s",(a>b) ? (sprintf(msg,"%.2f is greater than %.2f",a,b),msg) 
               :(b>a) ? (sprintf(msg,"%.2f is greater than %.2f",b,a),msg) 
                      : (sprintf(msg," %.2f and %.2f are equal ",a,b),msg)  );
       
        /*sprintf =>  Formats text and stores it in a string variable (does not print)
            sprintf(msg, "5 is greater than 3")  → put text in box (msg)
            ,msg → hand over the box to printf
            printf("%s", box) → print what’s inside the box
         */
                               

    return 0;
}

 /*   #include <stdio.h>
        int main() {
        int a, b;

        printf("Enter first number = ");
        scanf("%d", &a);
        printf("Enter second number = ");
        scanf("%d", &b);

        if(a == b) {
            printf("Both are equal\n");
        } else {
            // This handles both cases: if a>b it prints a, else it prints b
            printf("%d is greater\n", (a > b) ? a : b);
        }

        return 0;
        }
*/


/*     #include <stdio.h>
        int main() {
        int a, b;

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        printf("%s",
        (a > b) ? "a is greater" : (b > a) ? "b is greater" : "Both are equal");

        return 0;
    }

*/