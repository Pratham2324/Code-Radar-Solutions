#include<stdio.h>
#include<ctype.h>
int main(){
    char alphabet;
    if(alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' ||alphabet == 'U' || alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
       printf("Vowel");
    }
    else if{
        printf("Consonant");
    }
    
    else if(alphabet >= 0 || alphabet <= 9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}