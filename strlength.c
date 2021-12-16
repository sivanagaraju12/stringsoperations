#include"header.h"
#include<stdio.h>
#include<string.h>
void strlength()
{
char s1[30];
printf("Enter a string 1:");
fgets(s1,30,stdin);
printf("length of the string1:%ld\n",strlen(s1));
}
