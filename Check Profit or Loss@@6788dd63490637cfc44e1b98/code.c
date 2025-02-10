#include <stdio.h>


int main() {
    int costprice;
    int sellingprice;
    scanf("%d %d",&costprice,&sellingprice);
    if (costprice < sellingprice){
        printf("Profit");
    }
    else if(sellingprice < costprice){
        printf("Loss");
    }
    else{
    printf("%No Profit No Loss");
    }
    return 0;
}