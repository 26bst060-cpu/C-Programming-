#include <stdio.h>

int main() {
    float r, area;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
