#include<stdio.h>
int main(){
    int week;
    printf("Enter week number (1-7):");
    scanf("%d",&week);

    switch(week){
    case 1:
    printf("Saturday");
    break;
     case 2:
    printf("Sunday");
    break;
     case 3:
    printf("monday");
    break;
     case 4:
    printf("tuesday");
    break;
     case 5:
    printf("wednesday");
    break;
     case 6:
    printf("thrusday");
    break;
     case 7:
    printf("friday");
    break;
    default:
    printf("not a valid number");
    }
}