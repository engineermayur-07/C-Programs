#include <stdio.h>
                  
int main(){
    
    int a,b,c;
    printf("Enter the 1st operand : \n");
    scanf("%f",&a);
     printf("Enter the 2st operand : \n");
scanf("%f",&b);
 printf("Enter the operation.\n Type 1 for addition\n Type 2 for substraction\n Type 3 for multiplication\n Type 4 for division\n Type 5 for modulus\n ");
scanf("%f",&c);

if (c==1){
    printf("Your Result is : %f \n",a+b); 
}
if (c==2){
    printf("Your Result is : %.2f \n",a-b); 
}
   if (c==3){
    printf("Your Result is : %.2f \n",a*b); 
}
if (c==4){
    printf("Your Result is : %.2f\n",a/b); 
}
if (c==5){
    printf("Your Result is : %d\n",a%b); 
}
if (c==1,2,3,4,5){
    printf(" ");
}


else  printf("You have not entered correct value");
return 0;
}