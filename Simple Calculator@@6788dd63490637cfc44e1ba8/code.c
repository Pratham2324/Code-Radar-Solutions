#include <stdio.h>

int main() {
    int num1,num2;
    char sign;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&sign);
    switch(sign){
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
            break;
    }
    return 0;
}