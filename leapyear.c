#include <stdio.h>
    int main()
    { 
                          
        /*
         Program : Leap year calculator
        Author : Mayur B Gund
        Date : 30 Sept 2025
        */
        
      /*
      Write a program to find whether a year entered by the user is a leap year or not.
      Take year as an input from the user
      */
      int year;//declare variable year
      
      printf("Enter the year :\n"); //print o/p
      scanf("%d",&year); //accept variable year
      
      if(year<1000 || year>9999){ //conditional else if
        printf("This programs evaluates leap years after 1000 and before 9999. \nThe year %d is not after 1000 or before 9999",year);
      }
     
       else if(year>1000 && year%4==0){ //conditional if
        printf("The year %d is a leap year",year);
      }
     
      
      else printf("The year %d is not a leap year",year); //else 
      
      
      return 0;
      
    }