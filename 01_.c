#include <stdio.h>
int main()
{
    /*
    Program : To check divisibility of two numbers
    Author : Mayur B Gund
    Date : 13 Sept 2025
    Day : 08
    */
    int a,b,c;  //Declaring variables
    printf("\n\nHello World \n\n");
    printf("This program helps you to determine whether the no a is divisible by  no b or not\n\n");
    printf("Enter the dividend :\n\n");
    scanf("%d", &a);  //User input
    printf("Enter the divisor :\n\n");
    scanf("%d", &b);  //User input
    c = a % b;  //Using modulus operator
    if (c == 0)  //Using conditioning statement
    {
        printf("a is completely divible by b\n\n");
    }
    else
    {
        printf("a is not completely divible by b\n\n");
    }
    return 0; //return 0
}