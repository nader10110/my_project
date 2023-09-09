/* Write a C program to input length and width of a rectangle and find area of the given rectangle.
  How to calculate area of a rectangle in C programming. 
  Logic to find area of a rectangle whose length and width are given in C programming.

Example
Input
Enter length: 5
Enter width: 10
Output

Area of rectangle = 50 sq. units
*/



#include <stdio.h>
int main()
{
    float length,width,area;
    printf("enter length : ");
    scanf("%f",&length);

    printf("enter width : ");
    scanf("%f",&width);

    area = length*width;
    printf("area of rectangle = %0.2f sq.units \n",area);



    return 0;
}
