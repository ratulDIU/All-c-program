#include <stdio.h>

int main()
{
    char ch;

    printf("Enter int numbers: ");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
        printf("ch is alphabet");
    }
    else{
        printf("ch is not alphabet");
    }
    return(0);
}