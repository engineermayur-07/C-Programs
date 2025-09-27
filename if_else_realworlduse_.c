#include <stdio.h>
                  
/*
 Program : real world solution of eligibility prediction 
Author : Mayur B Gund
Date : 27 Sept 2025
*/

    
int main()
   {
    printf("Hello, World!\n");
int phy,che,math;
printf("Enter marks of Physics,Chemistry,Biology/Maths\n");

printf("Physics: ");
scanf("%d",&phy);

printf("Chemistry :\n");
scanf("%d",&che);

printf("Maths/Bio :\n ");
scanf("%d",&math);

float percent=(phy+che+math)/3;

if(phy>=33 && che>=33 && math>=33 && percent >=40)
printf("You are eligible for entrance exam");
else printf("You are not eligible for entrance exam");
return 0;
}
   