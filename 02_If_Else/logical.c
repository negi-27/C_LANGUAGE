#include <stdio.h>

int main(){
    int a,b;

    printf("Enter value for a = ");
    scanf("%d",&a);
    printf("Enter value for b = "); 
    scanf("%d",&b);   

    printf("the value of a and b is %d\n",a&&b);
            if (a&&b)
                    {
                        printf("both are true\n");
                    }
             else
                    {
                        printf("'AND' is false( as one of a&b or both a&b are false )\n");
                    }

    printf("the value of a or b is %d\n",a||b);
            if (a||b)
                    {
                        printf("at least one is true (||)\n");
                    }
            else
                    {
                        printf("OR is false (both are false)\n");
                    }

    printf("the value of not(a) is %d and not(b) is %d\n",!a,!b);
            if (!a || !b)
            {
                if (!a && !b)
                    {
                        printf("both a and b are false\n");
                    }
            else if(!a)
                    {
                    printf("a is false (!a)\n");
                    }
            else if(!b)
                    {
                        printf("b is false (!b)\n");
                    }
            else
                    {
                        printf("both a and b are true (!a and !b are false)\n");
                    }

            }
    
    return 0;
}