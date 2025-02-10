#include <stdio.h>

int main() {
    int num1,num2;
    char sign;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&sign);
    case(sign){
        case '+':
       printf("%d",num1+num2);
       case '-':
       printf("%d",num1-num2);
       case '*':
       printf("%d",num1*num2);
       case '/':
       printf("%d",num1/num2);
    default:
    printf("Error")
    }
    return 0;
}