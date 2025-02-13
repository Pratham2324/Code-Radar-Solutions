#include <stdio.h>

int main() {
    int num1,num2;
    char sign;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&sign);
    switch(sign){
        case'+':
        printf("%d",num1+num2);
        break;
        case'-':
        printf("%d",num1-num2);
        break;
        case'*':
        printf("%d",num1*num2);
        break;
        case'/':
        if(c !=0){
            printf("%d",num1/num2);
        }
        else{
            printf("error");
        }
        
        break;
        default:
        printf("error");
            break;
    }
    return 0;
}