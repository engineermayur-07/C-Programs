#include <stdio.h>
                  
/*
 Program : Switch Case Program
Author : Mayur B Gund
Date : 22 Sept 2025
*/
int main(){
    int a;
    printf("Enter a number from 1 to 5\n");
    scanf("%d",&a);
    printf("You entered %d\n",a);
    switch(a){
        case 1:
        printf("You entered 1. \n1 is the only number that is neither prime nor composite.");
    break;

    case 2:
        printf("You entered 2. \n2 is the only even prime number.");
    break;

    case 3:
        printf("You entered 3.\n 3 is the first odd prime number, and it's considered a “magic number” in many cultures and sciences. \n");
    break;

    case 4:
        printf("You entered 4.\n 4 is the first composite number and the only\n number with the same number of letters as its value in English. \n");
    break;

    case 5:
        printf("You entered 5.\n Humans commonly count in base 10,\n and we have 5 fingers on each hand, which is likely why the number 5 is deeply embedded in culture, math, and measurement. \n");
    break;

    default :
        printf("You have not entered a no from 1 to 5 \n");
    break;



}

    return 0;
}