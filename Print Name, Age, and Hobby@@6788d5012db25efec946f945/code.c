#include <stdio.h>

int main() {
    char name;
    int age;
    char hobby;
    scanf("%s %s",&name,&age);
    scanf("%d",&age);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
    return 0;
}