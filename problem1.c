#include <stdio.h>

int addThreeNumbers(int *a, int *b, int *c) {
    return *a + *b + *c;
}

int main() {
    int num1, num2, num3;
    
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int sum = addThreeNumbers(&num1, &num2, &num3);
    
    printf("Sum of the three numbers is: %d\n", sum);
    
    return 0;
}
