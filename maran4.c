#include<stdio.h>
int main()
{
int n,i,sum,res;
printf("enter a no:");
scanf("%d",&n);
printf("\n no from 1 to %d:\n",n);
for(i=1;i<=n;i++)
{
   printf("%d",i);
}
sum=0;
i=1;
while(i<=n)
{
   sum =sum+1;
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
printf("\n\n sum of no=%d",sum);
printf("\n factorial of %d=%d",n,res);
return 0;
}
