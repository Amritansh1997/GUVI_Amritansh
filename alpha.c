#include<stdio.h>
void main()
{
char a[2];
printf("Enter Character");
scanf("%c",&a[1]);
if(a[1]>='a'&&a[1]<='z'||a[1]>='A'&&a[1]<='Z')
{printf("Alphabet");}
else{printf("Not an Alphabet");}
}
