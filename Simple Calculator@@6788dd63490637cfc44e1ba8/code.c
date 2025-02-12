#include <stdio.h>

int main() {
    int num1,num2;
    int sign;
    scanf("%d %d",&num1,&num2);
    scanf("%d",&sign);
    if(sign == '+'){
       printf("%d",num1+num2);
    }
    else if(sign == '-'){
       printf("%d",num1-num2);
    }
    else if(sign == '*'){
       printf("%d",num1*num2);
    }
    else if(sign == '/'){
       printf("%d",num1/num2);
    }
    else{
    printf("Error");
    }
    return 0;
}