#include<stdio.h>
int main()
{
    int i=56,k=45;
    void swap(int a,int b)
    {
      a=i;
      i=k;
      k=a;
      
    }
   
    swap(i,k);
    printf("%d,%d",i,k);
    
return 0;
} 