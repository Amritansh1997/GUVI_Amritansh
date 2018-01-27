#include<stdio.h>
void main()
{
int n,k,i,sum=1;
printf("Enter the no.:");
scanf("%d",&n);
printf("Enter the power:");
scanf("%d",&k);
for(i=1;i<=k;i++)
{sum=sum*n;}
printf("Answer: %d",sum);}
