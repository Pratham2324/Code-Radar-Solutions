#include <stdio.h>

int main() {
    float radius;
    float n;
    scanf("%f",&radius);
    n = square(radius);
    printf("%.2f",3.14*n);
    return 0;
}