#include<stdio.h>
void main()
{
int array[];
printf("Enter a option: \n 1.insertion \n 2.deletion \n 3.searching \n 4.sorting \n 5.display \n 6.Exit");
scanf("%d",n);
switch(n)
{
case 1:
      insertion();
      break;
case 2:
      deletion();
      break;
case 3:
      searching();
      break;
case 4:
      sorting();
      break;
case 5:
      display();
      break;
case 6:
      break;
default:
      printf("invalid option")
