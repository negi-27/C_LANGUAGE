#include <stdio.h>
int main() 
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 1;
}

/*
OUTPUT 
Enter how many Fibonacci numbers you want: 10
Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
*/