#include <stdio.h>
int main()
{
    /*
    Program : Income Tax Calculator
    Author : Mayur B Gund
    Date : 30 Sept 2025
    */
    printf("Hello, World!\n");
   /*
   Problem : Calculate income tax paid by an employee to the government as per the slabs mentioned below:

    Income Slab   Tax

    2.5-5.0L       5%

    5.0L-10.0L    20%

    Above 10.0L   30% 
*/
   float income;
   
   printf("Enter your income in lakhs :\n");
   scanf("%f",&income);
   
   
   if(income>=2.5 && income<=5){
     printf("You have to pay %.4f lakhs as income tax",income*5/100);
   }
   
   else if(income>5 && income<=10){
     printf("You have to pay %.4f lakhs as income tax",income*20/100);
   }
   
  else if(income>10){
     printf("You have to pay %.4f lakhs as income tax",income*30/100);
   }
   
   else if(income<0){
     printf("Income can't be negative. Recheck the income you entered ");
   }
   
   else printf("You dont have to pay income tax");

    return 0;

}