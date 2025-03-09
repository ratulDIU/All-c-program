#include<stdio.h>
int main(){
    int number;
    printf("enter a number :");
    scanf("%d",&number);

    switch (number >0){
        case 1:
        printf("positiove \n");
        break;
        case 0:
        switch(number<1){
            case 1:
            printf("negative \n");
            break;

            case 0:
            printf("zero\n");
            break;
        }
    break;
    }
    return(0);
}