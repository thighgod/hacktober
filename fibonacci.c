#include<stdio.h>
void main()
{
 int i,a=0,b=1,c,e;
 printf("enter the limit=");
 scanf("%d",&e);
 for(i=1;i<=e;i++)
 {
   c=a+b;
   printf("the numbers=%d\n",c);
   a=b;
   b=c;
 }
}