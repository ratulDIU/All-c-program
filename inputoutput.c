#include <stdio.h>    
int main()
{ 
    int testint =5;
    float number1 = 13.5;
    double number2 = 12.4;
    char ch = 'a';

    printf("number =%d\n",testint);
    printf("number1 = %f\n",number1);
    printf("number2 = %lf\n",number2);
    printf("character = %c\n",ch);

    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    return 0;
}

