//
//  This is a project for studying functions. This program calculates the area of the circle.
//  Created by Mehmet Akif Duran
//

#include <stdio.h>

//  Function Definition

float CircleArea (float r){
    float pi = 3.1459;
    float area = pi * r * r;
    return area;
}


int main (){ // Beginning of the main
    
    //Variable Declerations :
    
    float r=0;
    
    //Executable Statements :
    
    printf("Enter the radius of the circle : \n");
    scanf("%f", &r);
    
    printf("The area of this circle is = %.2f\n", CircleArea(r));
    
    return 0;
    
}// End of the main



