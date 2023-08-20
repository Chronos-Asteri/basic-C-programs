// Write a program to print area of circle

# include <stdio.h>

int main(){
    
    float radius, area;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = 3.14159265 * radius * radius;

    printf("The Area of circle is: %f \n", area);
    
    return 0;

}
