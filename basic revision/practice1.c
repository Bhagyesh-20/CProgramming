#include <stdio.h>

// To calculate the area of the rectangle
int main() {
    int a, b;
    
    // Input for length
    printf("Enter length: \n");
    scanf("%d", &a);
    
    // Input for breadth
    printf("Enter breadth: \n");
    scanf("%d", &b);
    
    // Calculating and displaying the area
    printf("The area of the rectangle is %d\n", a * b);  
    
    return 0;
}
