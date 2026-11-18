#include<stdio.h>
int main()
{
	int a, b, choice, res;
	printf("===BITWISE OPERATIONS\n");
	printf("enter the first number:");
	scanf("%d",&a);
	printf("1.bitwise and(&)\n");
	printf("2.bitwise or(|)\n");
	printf("3.bitwise xor(^)\n");
	printf("4.bitwise not(~)\n");
	printf("5.left shift(<<)\n");
	printf("6.right shift(>>)\n");
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice)
   {
      case 1:
         res=a&b;
      	 printf("bitwise and result=%d",res);
      	 break;
       case 2:
       	 res=a/b;
       	 printf("bitwise or result=%d",res);
       	 break;
       case 3:
         res=a^b;
         printf("bitwise xor result=%d",res);
         break;
        case 4:
       	 res=~a;
       	 printf("bitwise not result=%d",res);
       	 break;
       	case 5:
		  res=a<<b;
		  printf("bitwise left shift result=%d",res);
		  break;
		 case 6:
		   res=a>>b;
		   printf("right shift result=%d",res);
		   break;
		  default:
		  	printf("invalid choice");
 	}
	       return 0;
}