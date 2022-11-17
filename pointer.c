#include<stdio.h>
void main()
{
int myage=48;
int *ptr=&myage;
printf("%d \n",myage);
printf("%p \n",&myage);
printf("%p \n",ptr);
}
