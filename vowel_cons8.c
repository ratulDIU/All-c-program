#include <stdio.h>

int main()
{
    char ch;

    printf("Enter int numbers: ");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
        printf("ch is alphabet\n");
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'|| ch=='O'||ch=='U'){
            printf("ch is vowel\n");
        }
        else {
            printf("ch is consonent\n");
        }
    }
    else{
        printf("ch is not alphabet\n");
    }
    return(0);
}