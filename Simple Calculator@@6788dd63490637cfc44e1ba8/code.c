#include <stdio.h>

int main() {
    int num1,num2;
    char sign;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&sign);
if(sign = '+'){
    printf("%d",num1+num2);
}
else if(sign = '-'){
    printf("%d",num1-num2);
}
else if(sign = '*'){
    printf("%d",num1*num2);
}
else if(sign = '/'){
    printf("%d",num2/num1);
}
    return 0;
}