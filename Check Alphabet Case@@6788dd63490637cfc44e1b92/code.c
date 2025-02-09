#include<stdio.h>
int mmain(){
    char alphabet;
    scanf("%c",&alphabet);
    if(alphabet >= 'A' && alphabet <= 'Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    
}