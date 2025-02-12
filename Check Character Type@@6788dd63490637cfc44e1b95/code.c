#include<stdio.h>
// #include<type.h>
int main(){
    char alphabet;
    if(alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' ||alphabet == 'U' || alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
       printf("Vowel");
        break;
    }
    else{
        printf("Consonant");
        break;
    }
    
    if(alphabet >= 0 || alphabet <= 9){
        printf("Digit");
        break;    
    }
    else{
        printf("Special Character");
        break;    
    }
    return 0;
}