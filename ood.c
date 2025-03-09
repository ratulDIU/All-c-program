#include <stdio.h>

const PI = 3.1416;

int main() {
    int a;
    scanf("%d", &a);

    double square_area = (double)a * a;
    double circle_area = PI * a * a / 4;
    double shaded_area = square_area - circle_area;

    printf("%.4f\n", shaded_area);

    return 0;
}
