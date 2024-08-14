#include <stdio.h>
//Calculations for area of a circle and volume of a cylinder

int main(){

    int radius,height;  
    printf("Please enter the radius: ");
    scanf("%d \n",&radius);    
    printf("Please enter the height: ");
    scanf("%d",&height);
    printf("The Area of the circle is %f",3.14*radius);
    printf("The Volume of the Cylinder is %f",3.14*radius*radius*height);


return 0;
}
