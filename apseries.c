#include <stdio.h>
int main()
{
           
    /*
     Program : Problem Statement
    Author : Mayur B Gund
    Date : 28 Sept 2025
    */
   
    /*
    Problem : Display this AP upto n terms 4,7,10,13,..*/
    int n;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    
    for(int i=4;i<=3*n+1;i=i+3){
      printf("%d   ",i);
    }
}