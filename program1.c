#include <stdio.h>
int main(){
int a,b,choice,res;
printf("========OPERATION AND EXPRESSION=========\n");
printf("enter the first number;");
scanf("%d",&a);
printf("enter the second no;");
scanf("%d",&b);
printf("\n----MENU----\n");
printf("1.add\n");
printf("2.sub\n");
printf("3.multiply\n");
printf("4.divide\n");
printf("5.modulus\n");
printf("\n enter your choice;");
scanf("%d",&choice);
switch(choice)
{
   case 1:
     res = a+b;
     printf("result=%d",res);
     break;
   case 2 :
     res=a-b;
     printf("result=%d",res);
     break;
   case 3 :
     res=a*b;
     printf("result=%d",res);
     break;
   case 4 :
     if(b!=0)
     { 
       res =a/b;
       printf("res =%d",res);
     }
     else
     {
       printf("division by zero not possible;");
       }
   case 5:
     if(b!=0)
     {
        res=a%b;
        printf("result=%d",res);
      }
      else
      {
        printf("modulus by zero is not possible");
      }
      break;
   defult:
     printf("invalid choice");
     }
   return 0; 
} 
     
     
     
     
     
     
     
     
     
     
     
     
     
     
