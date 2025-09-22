#include <stdio.h>
                  
int main(){
    float a,b,c;
    printf("Enter the 1st operand : \n");
    scanf("%f",&a);
     printf("Enter the 2st operand : \n");
scanf("%f",&b);
 printf("Enter the operation.\n Type 1 for addition\n Type 2 for substraction\n Type 3 for multiplication\n Type 4 for division");
scanf("%f",&c);

if (c==1){
    printf("Result : %f \n",a+b); 
}
if (c==2){
    printf("Result : %f \n",a-b); 
}
   if (c==3){
    printf("Result : %f \n",a*b); 
}
if (c==4){
    printf("Result : %f\n",a/b); 
}
else printf("You not gone through rules");
return 0;
}