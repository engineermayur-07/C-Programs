#include <stdio.h>
                  
/*
 Program : Using ASCII value
Author : Mayur B Gund
Date : 30 Sept 2025
*/
int main(){
    printf("Enter a character : \n");
    char a;
    scanf("%c",&a);
    printf("The ascii value of %c is %d\n",a,a);
    
if(a>=65 && a<=90){
    printf("The character %c is uppercase");
}
else printf("The character %c is not uppercase");
    return 0;
}