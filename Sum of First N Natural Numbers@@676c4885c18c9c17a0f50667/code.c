#include<stdio.h>
int main(){
    int num;
    int sum =0;
    scanf("%d",&num);
    // if(num<1){
    //   return 0;
    // }
    for(int i = 0;i<=num;i++){
        sum += i;
        
    }
    printf("%d",sum);
    

}