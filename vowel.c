#include<stdio.h>
void main()
{
char c[2];
printf("Enter single character:");
scanf("%c",&c[1]);
if(c[1]=='a'|c[1]=='e'|c[1]=='i'|c[1]=='o'|c[1]=='u')
{printf("Vowel");}
else{printf("Consonant");}
}
