#include <stdio.h>  

int main()
{
    int sidea, sideb, sidec; 
    scanf("%d %d %d", &sidea, &sideb, &sidec);  
    if ((sidea + sideb > sidec) && (sidea + sidec > sideb) && (sideb + sidec > sidea)) {
        if(sidea==sideb && sideb==sidec) 
        {
            printf("Equilateral");  
        }
        else if(sidea==sideb || sidea==sidec || sideb==sidec) 
        {
            printf("Isosceles");
        }
        else 
        {
            printf("Scalene");  
        }
    } else {
        printf("error");
    }
    return 0;
} 
