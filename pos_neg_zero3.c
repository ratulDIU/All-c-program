#include <stdio.h>

int main()
{
    int num;

    printf("Enter int numbers: ");
    scanf("%d",&num);
    if(num==0){
        printf("%d is zero\n",num);
    }
    else if(num>0){
        printf("%d is positive\n",num);
    }
    else{
        printf("%d is negative\n",num);
    }
    return(0);
    }