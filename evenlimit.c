#include<stdio.h>
void main()
{
int n1,n2,i;
printf("Enter first no.:");
scanf("%d",&n1);
printf("Enter second no.");
scanf("%d",&n2);
for(i=n1;i<=n2;i++)
{if(i%2==0)
{printf("%d\n",i);}}
}
