#include<stdio.h>
#include<conio.h>
main()
{
int choice;
printf("enter your choice: 1.pizza\n 2.french fries\n 3.burger\n 4.pasta\n 5.sandwich\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
     printf("pizza\n");
     printf("price is 239 rupees");
     break;
case 2:
     printf("french fries\n");
     printf("price is 97 rupees");
     break;
case 3:
     printf("burger\n");
     printf("price is 129 rupees");
     break;
case 4:
     printf("pasta\n");
     printf("price is 179 rupees");
     break;
case 5:
     printf("sandwich\n");
     printf("price is 149 rupees");
     break;
 default:
     printf("invalid choice");
     }
 }
     
