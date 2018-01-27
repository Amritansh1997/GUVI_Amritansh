#include<stdio.h>
void main()
{
int n1,n2,j,flag;
printf("Enter first no.");
scanf("%d",&n1);
printf("Enter second no.");
scanf("%d",&n2);
while(n1<n2)
{ flag=0;
for(j=2;j<=n1/2;++j)
{if(n1%j==0)
{flag=1;
break;}}
if(flag==0)
{printf("%d is prime no.\n",n1);}
n1++;}
}
