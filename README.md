# my_project
/*Write a C program to input two numbers and perform all arithmetic operations. How to perform all arithmetic operation between two numbers in C programming.
C program to find sum, difference, product, quotient and modulus of two given numbers.

Example
Input
First number: 10
Second number: 5
Output

Sum = 15
Difference = 5
Product = 50
Quotient = 2
Modulus = 0

*/



#include <stdio.h>
int main()
{
    int num1,num2;
    int sum,sub,mult,mod;
    float div;
    printf("enter numbers : ");
    scanf("%d %d",&num1,&num2);

    sum  = num1+num2;
    sub  = num1-num2;
    mult = num1*num2;
    mod  = num1%num2;
    div  = (float)num1/num2;
    printf("sum = %d \n",sum);
    printf("sub = %d \n",sub);
    printf("mult= %d \n",mult);
    printf("mod = %d \n",mod);
    printf("div = %f \n",div);



    return 0;
}
