#include"header.h"
#include<stdio.h>
#include<string.h>
void strreverse()
{
int i=0,l;
char s4[30];
printf("Enter a string 3:");
fgets(s4,30,stdin);
l=strlen(s4);
for(i=l-1;i>=0;i--)
{
printf("%c ",s4[i]);
}
}
