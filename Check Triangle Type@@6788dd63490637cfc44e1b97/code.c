#include <stdio.h>  // Include the standard input/output header file.

int main()
{
    int sidea, sideb, sidec; 
    printf("Input three sides of triangle: ");  
    scanf("%d %d %d", &sidea, &sideb, &sidec);  // Read and store the sides of the triangle.
    // Check if the sides form a valid triangle
    if ((sidea + sideb > sidec) && (sidea + sidec > sideb) && (sideb + sidec > sidea)) {
        // If the sides form a valid triangle, continue with the classification
        if(sidea==sideb && sideb==sidec) // Check if all sides are equal.
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
