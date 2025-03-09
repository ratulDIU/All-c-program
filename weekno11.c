#include <stdio.h>
int main()
{
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
    if(week == 1){
        printf("saturday");}
    else if(week == 2)
    {
        printf("sunday");
    }
    else if(week == 3)
    {
        printf("manday");
    }
    else if(week == 4)
    {
        printf("wednesday");
    }
    else if(week == 5)
    {
        printf("thusday");
    }
    else if(week == 6)
    {
        printf("thrusday");
    }
    else if(week == 7)
    {
        printf("friday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}