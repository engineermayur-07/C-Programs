#include<stdio.h>
   int main(){
   
    /*
     Program : 
    Author : Mayur B Gund
    Date : 
    */
   
  /*
  . Write a program to find greatest of four numbers entered by the user
  */
  float a,b,c,d;
  
  printf("Enter four distinct numbers\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  scanf("%f",&d);

  if(a>b && a>c && a>d){
    printf("%.2f is the greatest of the numbers you entered",a);
  }
  else if(b>a && b>c && b>d){
    printf("%.2f is the greatest of the numbers you entered",b);
  }
  else if(c>b && c>a && c>d){
    printf("%.2f is the greatest of the numbers you entered",c);
  }
  else if(d>b && d>c && d>a){
    printf("%.2f is the greatest of the numbers you entered",d);
  }
}