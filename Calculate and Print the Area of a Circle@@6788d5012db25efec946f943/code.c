#include <stdio.h>

int main() {
    float radius;
    float area;
    scanf("%f %f",&radius,&area);
    area = square(radius);
    printf("Area: %f",3.14*area);
    return 0;
}