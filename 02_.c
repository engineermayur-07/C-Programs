#include <stdio.h>
int main(){
    int a;
    printf("\nEnter your age \n:");
    scanf("%d", &a);

if (a==0){
    printf("Your are not born yet.\n Enter in when you will complete 18");
}
if (a%5==0){
    printf("Congrates\nYour age is divisible by 5\n");
}

if (a%9==0){
    printf("Congrates\nYour age is divisible by 9\n");
}

if (a%3==0){
    printf("Congrates\nYour age is divisible by 3\n");
}

if (a>=18){
    printf("Your age is above 18.\n Your are allowed in\n");
    
}
else {
    printf("Your age is below 18,\n you are restricted\n");
    
}
    return 0;
}