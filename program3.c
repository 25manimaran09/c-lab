#include <stdio.h>
int main()
{
int a,b,choice,res;
printf("=====BRANCHING STATEMENTS=====\n");
printf("enter the first no");
scanf("%d",&a);
printf("enter the second no");
scanf("%d",&b);
printf("\n----Menu----\n");
printf("1.check +ve or -ve:\n");
printf("2.check odd or not\n");
printf("3.find the largest\n");
printf("4.check divisible by n\n");
printf("\nenter choice");
scanf("%d",&choice);
switch(choice)
{ 
case 1:
   if(a>0)
      printf("%d is positive",a);
   else if(a<0)
      printf("%d is negative",a);
   else
      printf("%d is zero",a);
      break;
case 2:
   if(a%2==0)
      printf("%d is even",a);
   else
      printf("%d is odd",a);
      break;
case 3:
   if(a>b)
   {
      res =a;
      printf("%d is largest no",res);
   }
   else if(b>a)
   {
      res =b;
      printf("%d is lagest",res);
   }
   else
   {
      printf("both no are equal");
   }
   break;
case 4:
   if(a%5==0)
      printf("%d is divisible by5",a);
   else
      printf("%d not divisible by 5",a);
   break;
default:
   printf("not valid");
}
   return 0;
}












      
      
      
      
      
      
      
      
      
      
      
