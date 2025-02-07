#include <stdio.h>

int main() {
    int a,b,c;
    int average;
    scanf("%d %d %d",&a,&b,&c);
    average = (a+b+c)/3;
        printf("Average: %0.2d", average);
    return 0;
}