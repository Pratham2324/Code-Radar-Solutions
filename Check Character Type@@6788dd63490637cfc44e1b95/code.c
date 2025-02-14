#include<stdio.h>
#include<ctype.h>
int main(){
    char alphabet;
    scanf("%c",&alphabet);
    if(isdigit(alphabet)){
       printf("Digit");
    }
    else if(alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' ||alphabet == 'U' || alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
        printf("Vowel");
    }
    
    else if((alphabet >='a' && alphabet <= 'z' ) || (alphabet >='A'&& alphabet <='Z')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }  
    return 0;
}