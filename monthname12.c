#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    if(month == 1){
        printf("january");
    }
    else if(month == 2)
    {
        printf("february");
    }
    else if(month == 3)
    {
        printf("march");
    }
    else if(month == 4)
    {
        printf("april");
    }
    else if(month == 5)
    {
        printf("may");
    }
    else if(month == 6)
    {
        printf("june");
    }
    else if(month == 7)
    {
        printf("july");
    }
    else if(month == 8)
    {
        printf("august");
    }
        else if(month == 9)
    {
        printf("septembor");
    }
        else if(month == 10)
    {
        printf("octobor");
    }
        else if(month == 11)
    {
        printf("novembor");
    }
        else if(month == 12)
    {
        printf("decembor");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}