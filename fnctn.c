#include<stdio.h>
int myFunction()
{
printf("i just got executed! \n");
return(5);
}
int main()
{
int a;
a=myFunction();
printf("%d\n",a);
return 0;
}

