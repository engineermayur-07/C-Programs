#include <stdio.h>
int main()
{
                      
    /*
     Program :Table printer 
    Author : Mayur B Gund
    Date : 28 Sept 2025
    */
    
    printf("Hello, World\n");
    int a;
    
    printf("Enter the table which you want :");
    scanf("%d",&a);
    int i=1;
    while(i<=10){
      printf("%dx%d =%d\n",a,i,a*i);
    i++;
    }
  return 0;  
    
}