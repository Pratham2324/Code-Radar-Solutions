#include <stdio.h>

int main()
{
int side1,side2,side3;
scanf("%d %d %d",&side1,&side2,&side3);
if(side1+side2>side3 || side2+side3>side1 || side1+side3>side2){
    if(side1 == side2 && side2 == side3 && side3 == side1){
        printf("Equilateral");
    }
    else if(side1 == side2 || side2 == side3 || side3 == side1){
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }
}
else{
    printf("error");
}

    return 0;
}

