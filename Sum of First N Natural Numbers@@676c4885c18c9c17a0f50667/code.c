#include<stdio.h>
int main(){
    int num;
    int sum =0;
    scanf("%d",&num);
    if(num==0){
        printf("0.1*0") ;
    }
    for(int i = 1;i<=num;i++){
        sum += i;
        
    }
    printf("%d",sum);
    

}