#include <stdio.h>

int main()
{
    int num;

    printf("Enter int numbers: ");
    scanf("%d",&num);
    if(num%2==5 && num%11){
        printf("the number is divisible by 5 or 11");
    }
    else{
        printf("the number is not divisible by 5 or 11");
    }
    return(0);
    }