#include<stdio.h>
int add(int x,int y)
{
return x+y;
}
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
int result = add(a,b);
printf("result is= %d \n",result);
return 0;
}
