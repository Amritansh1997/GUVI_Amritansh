#include<stdio.h>
void main()
{
int n,r=0,re,k;
printf("Enter the no.:");
scanf("%d",&k);
n=k;
while(n!=0)
{re=n%10;
r=r*10+re;
n=n/10;}
if(k==r)
{printf("%d is palindrome",k);}
else{printf("%d is not palindrome",k);}
}
