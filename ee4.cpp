#include<stdio.h>
int main()
{
     int n, i, sum, res;
     printf("Enter a number:");
     scanf("%d,",&n);
     printf("/nnumbers from 1 to %d:");
     for(i=1;i<=n;i++);
   {
     printf("%d",i);
   }
     sum=0;
     i=1;
     while(i<=n)
   {
	 sum=sum+1;
	 i++;
   }
     res=1;
     i=1;
     do
   {
     res=res*i;
	 i++;
   } 
     while(i<=n);
     printf("\n\nsum of numbers=%d",sum);
     printf("\nfactorial of%d",n,res);
     return 0;
}