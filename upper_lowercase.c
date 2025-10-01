#include<stdio.h>
   int main(){
   
    /*
     Program : Upper,lower case determination
    Author : Mayur B Gund
    Date : 29 Sept 2025
    */
   
  /*
  Write a program to determine whether a character entered by the user is towercase or not
  */
  char a; //Declare variable
  
  printf("Enter any alphabet from AtoZ or atoz.\n"); //print
  scanf("%c",&a);//accept variable a
  
  if(islower(a)){  //if-else if-ladder
    printf("%c is a lowercase alphabet",a);
  }
  else if(isupper(a)){
    printf("%c is uppercase alphabet",a);
  }
  else printf("You didn't enter an alphabet ");
  return 0;
}