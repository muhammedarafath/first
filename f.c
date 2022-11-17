#include <stdio.h>
void myFunction(int a)
{
  printf("a in fun1 is%d \n",a);//3
  a=55;//55
  printf("a in fun2 is%d \n",a);//55
}
void main()
{ 
 int a=3;
 printf("a in main1 = %d \n", a);//3
 myFunction(a); //fn call
 printf("a in main2 = %d \n", a);//3
}
