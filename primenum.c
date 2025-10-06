#include<stdio.h>
                  
/*
 Program : To identify a prime num
Author : Mayur B Gund
Date : 6 Oct 2025
*/
int main(){
    int n;
     printf("Enter a number:");
     scanf("%d",&n);
       int a=50;
    for(int i=2;i<=(n-1);i++){
       
       if(n%i==0)
        a=13;

    }
     if(a==50){
        printf("The num %d is prime",n);
     }
    else printf("The num %d is composite",n);


    return 0;
}